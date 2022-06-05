#include <stdio.h>

#define TABSPACE 8

int main() {
  int c;
  int i = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      // white space detected check if X spaces or not
      for (i = 0; i < TABSPACE; i++) {
        c = getchar();
        if (c != ' ') {
          break;
        }
      }
      if (i == (TABSPACE - 1)) {
        putchar('\t');
        putchar(c);
      } else {
        // print the spaces == i +1
        for (int j = 0; j < i + 1; j++) {
          putchar(' ');
        }
        putchar(c);
      }
      i = 0;
    } else {
      putchar(c);
    }
  }
}
