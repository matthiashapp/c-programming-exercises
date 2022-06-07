#include <stdio.h>
#include <stdlib.h>

#define MAX 1000
#define UINT64_MAX 0xFFFFFFFFFFFFFFFF
// this actually works but the compiler will give a warning that the shifted
// value is one too much that is why i have chosen to use the hex presentation
//#define UINT64_MAX (1ULL << 64) -1

unsigned long int gl(char line[], int maxline);
void cp(char to[], char from[]);

int main() {
  unsigned long int max;
  unsigned long int len;
  char line[MAX];
  char longest[MAX];
  max = 0;
  while ((len = gl(line, MAX)) > 0) {
    if (len > max) {
      max = len;
      cp(longest, line);
    }
  }
  if (max > 0) {
    printf("%s", longest);
    if (max > 1000) {
      printf("...\n");
    }
    printf("longest line: %lu\n", max);
  }
  return EXIT_SUCCESS;
}

unsigned long int gl(char s[], int lim) {
  int c;
  int lastchar = 0;
  unsigned long int i;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
    if (i < lim - 1) {
      // save max lim chars
      // but count further and discard the rest
      s[i] = c;
      lastchar = i;
    }
  }
  if (c == '\n') {
    s[lastchar] = c;
    lastchar++;
  }
  s[lastchar] = '\0';
  return i;
}

void cp(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\n') {
    ++i;
  }
}
