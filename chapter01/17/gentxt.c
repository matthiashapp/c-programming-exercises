#include <stdio.h>
#include <stdlib.h>

#define MAX 0xFFFF

int main() {
  FILE *f = fopen("txt", "w");
  if (f == NULL) {
    return EXIT_FAILURE;
  }
  // printf w MAX times
  for (int k = 0; k < 120; k++) {
    for (int i = k; i < 140; i++) {
      fprintf(f, "w");
    }
    fprintf(f, "\n");
  }
  fclose(f);
  return EXIT_SUCCESS;
}
