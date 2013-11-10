#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "pt.h"

int main() {
  time_t now = time(NULL);
  struct tm *tm_now = localtime(&now);
  printHeader(tm_now);
  dateCond dc = dateCondFor(tm_now);
  generateTasks(dc, &printTask);
  return 0;
}

static void printHeader(struct tm* tm_day) {
  char n[11];
  printf("-------------------------------------------------\n");
  assert(strftime(n, 11, "%F", tm_day));
  printf("%s\n\n", n);
}

static void printTask(char* task, bool cond) {
  if (!cond) { return; }
  printf("[ ] %s\n", task);
}

static dateCond dateCondFor(struct tm* tm_day) {
  dateCond dc = { 0 };
  dc.weekday = tm_day->tm_wday >= 1 && tm_day->tm_wday <= 5;
  dc.sunday  = tm_day->tm_wday == 0;
  return dc;
}

static void generateTasks(dateCond dc, ctask f) {
  f("memora", true);
  f("Pimsleur's Japanese 2", dc.weekday);
  f("twitter", true);
  f("review stocks",  dc.weekday);
  f("1b programming", dc.weekday);
  f("weekly review",  dc.sunday);
}

