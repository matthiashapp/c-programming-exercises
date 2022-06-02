#include <stdio.h>
#include <stdlib.h>

#define MAX 1000
#define WIDTH 80

unsigned long int gl(char line[], int maxline);
void cp(char to[], char from[]);

int main() {
  unsigned long int len;
  int currentLine = 0;
  char line[MAX];
  char longest[MAX];
  while ((len = gl(line, MAX)) > 0) {
    if (len >= WIDTH) {
      printf("line: %d\n", currentLine);
      printf("line width: %lu\n", len);
      printf("line contents: %s", line);
    }
    currentLine++;
  }
  return EXIT_SUCCESS;
}

unsigned long int gl(char s[], int lim) {
  int c;
  int lastchar = 0;
  unsigned long int i;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
    if (i < lim - 1) {
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
