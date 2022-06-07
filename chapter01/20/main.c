#include <stdio.h>

#define TABSPACE 8

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      for (int i = 0; i < TABSPACE; i++) {
        putchar(' ');
      }
    } else {
      putchar(c);
    }
  }
}
