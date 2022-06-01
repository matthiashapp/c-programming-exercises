#include <stdio.h>
#include <stdlib.h>

int main() {
  int nl = 0;
  int tabs = 0;
  int ws = 0;
  int c;
  while ((c = getchar()) != EOF) {
    switch (c) {
    case '\n':
      nl++;
      break;
    case '\t':
      tabs++;
      break;
    case ' ':
      ws++;
      break;
    }
    putchar(c);
  }

  printf("newlines: %d\n", nl);
  printf("tabs: %d\n", tabs);
  printf("whitespaces: %d\n", ws);
}
