#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

int main() {
  int c;
  int wc = 0;
  int state = OUT;

  while ((c = getchar()) != EOF) {
    // print newline after worrd end
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
      continue;
    } else if (state == OUT) {
      // new word discovered print it on newline
      wc++;
      state = IN;
      printf("\n");
    }
    putchar(c);
  }
  printf("\nwc: %d\n", wc);
}
