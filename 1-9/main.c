#include <stdio.h>
#include <stdlib.h>

int main() {
  int c;
  int blank = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      blank++;
    } else {
      blank = 0;
    }
    if (blank == 0 || blank == 1) {
      putchar(c);
    }
  }
}
