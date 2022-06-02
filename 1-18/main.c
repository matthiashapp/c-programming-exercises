#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int gl(char line[], int maxline);
void cp(char to[], char from[]);
void trimTrailing(char line[], int len);

int main() {
  int len;
  char line[MAX];
  while ((len = gl(line, MAX)) > 0) {
    if (line[0] == '\n') {
      continue;
    }
    trimTrailing(line, len);
    printf("'%s'", line);
    printf("\n");
  }
  return EXIT_SUCCESS;
}

void trimTrailing(char line[], int len) {
  int i;
  for (i = len - 2; isblank(line[i]); i--)
    ;
  line[++i] = '\0';
}

int gl(char s[], int lim) {
  int c;
  int lastchar = 0;
  int i;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
    if (i < lim - 1) {
      s[i] = c;
    }
  }
  if (c == '\n') {
    s[i] = '\n';
    i++;
  }
  s[i] = '\0';
  return i;
}

void cp(char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\n') {
    ++i;
  }
}
