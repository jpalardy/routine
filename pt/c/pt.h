#include <stdbool.h>

typedef struct {
  bool weekday;
  bool sunday;
} dateCond;

typedef void (*ctask)(char*, bool);

static void printHeader(struct tm* tm_day);
static void printTask(char* task, bool cond);
static void generateTasks(dateCond dc, ctask);
static dateCond dateCondFor(struct tm* tm_day);

