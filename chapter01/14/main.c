#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 128

int main() {
  int c;
  int chars[MAX] = {0};
  while ((c = getchar()) != EOF) {
    if (isascii(c)) {
      chars[c]++;
    }
  }
  for (int i = 0; i < MAX; i++) {
    if (chars[i] > 0) {
      printf("ascii %d: %d times\n", i, chars[i]);
    }
  }

  return EXIT_SUCCESS;
}
