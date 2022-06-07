#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main() {
  int c;
  int wl = 0;
  int vi[MAX] = {0};

  while ((c = getchar()) != EOF) {
    // lets assume there are only three seperators
    if (c == ' ' || c == '\t' || c == '\n') {
      // note here we check if the current wl fits into the array
      if (wl <= MAX && wl > 0) {
        vi[wl]++;
      }
      wl = 0;
    } else {
      wl++;
    }
  }
  for (int i = 0; i < MAX; i++) {
    if (vi[i] > 0) {
      printf("wordlength %d: %d times\n", i, vi[i]);
    }
  }
}
