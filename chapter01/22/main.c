#include <stdio.h>
#include <stdlib.h>

#define FOLD 80 // fold current line after x chars

int main() {
  int c;
  int cl=0;

  while((c = getchar()) != EOF) {
    if (cl == FOLD && c != '\n') {
      putchar('\n');
      cl=0;
    }
    putchar(c);
    cl++;
    if (c == '\n') {
      cl= 0;
    }
  }
}
