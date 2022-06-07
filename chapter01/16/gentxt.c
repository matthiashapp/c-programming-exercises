#include <stdio.h>
#include <stdlib.h>

#define MAX 0xFFFF

int main() {
  FILE *f = fopen("txt", "w");
  if (f == NULL) {
    return EXIT_FAILURE;
  }
  // printf w MAX times
  for (unsigned short i = 0; i < MAX; i++) {
    fprintf(f, "w");
  }
  fprintf(f, "\n");
  for (int i = 0; i < 100; i++) {
    fprintf(f, "w");
  }
  fprintf(f, "\n");

  fclose(f);
  return EXIT_SUCCESS;
}
