#include <stdio.h>
#include <stdlib.h>

int main() {
  int c;
  int status;

  // print the value of EOF
  printf("EOF: %d\n", EOF);

  while (1) {
    // status == 0 break the loop
    // status == 1 continue read chars
    status = (c = getchar()) != EOF;
    printf("status: %d\n", status);
    // NOTE: print out the status if u like
    // printf("status: %d\n", status);
    if (status == 0) {
      break;
    }
    putchar(c);
  }
  return EXIT_SUCCESS;
}
