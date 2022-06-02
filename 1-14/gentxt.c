#include <stdio.h>
#include <stdlib.h>

int main() {

  FILE *f = fopen("txt", "w");
  if (f == NULL) {
    return EXIT_FAILURE;
  }
  // print every ascii char 3 times
  for (int k = 0; k < 3; k++) {
    for (int i = 0; i < 128; i++) {
      fprintf(f, "%c", i);
    }
  }
  fclose(f);
  return EXIT_SUCCESS;
}
