#include <stdio.h>
#include <stdlib.h>

#define MAX 1024
#define IN 1
#define OUT 0


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

int main() {
  
  
  char s[MAX];
  int len;
  int single = OUT;
  int multi = OUT;
  int notThisLine = 0;
  char *q = "//";    
  char *p = "/* */"; 
  char x= '\"'; 
  while ((len = gl(s, MAX)) > 0) {
    
    notThisLine = 0; 
    for (int i = 0; i < len; i++) {
      
      if (s[i] == '\"' && s[i - 1] != '\\') {
        while (i < len) {
          i++;
          if (s[i] == '\"' && s[i - 1] != '\\') {
            break;
          }
        }
        continue;
      }
      if (s[i] == '/' && i + 1 < len && s[i + 1] == '/') {
        for (int j = 0; j < i; j++) {
          printf("%c", s[j]);
        }
        printf("\n");
        single = IN;
        break;
      }
      
      if (s[i] == '/' && i + 1 < len && s[i + 1] == '*') {
        multi = IN;
      }
      
      if (s[i] == '*' && i + 1 < len && s[i + 1] == '/') {
        multi = OUT;
        notThisLine = 1;
        break;
      }
    }
    if (single) {
      single = OUT;
      continue;
    }
    
    if (multi == OUT && notThisLine == 0) {
      printf("%s", s);
    }
  }
}
