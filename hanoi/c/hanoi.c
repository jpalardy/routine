#include <stdio.h>
#include <stdlib.h>

static void hanoi(int rings, int src, int dst, int tmp, void(*f)(int, int)) {
  if (rings == 1) {
    f(src, dst);
    return;
  }
  hanoi(rings-1, src, tmp, dst, f);
  hanoi(1, src, dst, tmp, f);
  hanoi(rings-1, tmp, dst, src, f);
}

static void printMove(int src, int dst) {
  printf("%d -> %d\n", src, dst);
}

int main(int argc, char* argv[]) {
  int rings;
  if (argc < 2) {
    return 1;
  }
  rings = atoi(argv[1]);
  if (rings < 1) {
    return 1;
  }
  hanoi(rings, 1, 3, 2, &printMove);
  return 0;
}
