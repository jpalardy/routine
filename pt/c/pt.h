#include <stdbool.h>

struct dateCond {
  bool weekday;
  bool sunday;
};

typedef void (*ctask)(char*, bool);

static void printHeader(struct tm* tm_day);
static void printTask(char* task, bool cond);
static void generateTasks(struct dateCond dc, ctask f);
static struct dateCond dateCondFor(struct tm* tm_day);

