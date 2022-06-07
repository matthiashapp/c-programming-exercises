#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
  FILE *f = fopen("txt", "w");
  if (f == NULL) {
    return EXIT_FAILURE;
  }
  for (int i = 1; i < MAX; i++) {
    for (int k = 0; k < 3; k++) {
      for (int j = 0; j < i; j++) {
        fprintf(f, "w");
      }
      fprintf(f, " ");
    }
    fprintf(f, "\n");
  }
  fclose(f);
  return EXIT_SUCCESS;
}
