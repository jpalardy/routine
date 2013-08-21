
typedef struct {
  int weekday;
  int sunday;
} dateCond;

static void printHeader(struct tm* tm_day);
static void printTask(char* task, int cond);
static void generateTasks(dateCond* dc, void(*f)(char*, int));
static dateCond* dateCondFor(struct tm* tm_day);

