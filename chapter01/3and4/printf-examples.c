#include <stdio.h>
#include <stdlib.h>

int main() {
  // print min width of 3 right justified
  printf("%3d\n", 0);
  printf("%3d\n", 10);
  printf("%3d\n", 100);
  printf("\n");

  // left justified
  printf("%-3d\n", 0);
  printf("%-3d\n", 10);
  printf("%-3d\n", 100);
  printf("\n");

  // printf zero fill options
  printf("%03d\n", 0);
  printf("%03d\n", 10);
  printf("%03d\n", 100);
  printf("\n");

  // At least five-wide, with a plus sign
  printf("%+5d\n", 10);
  // Five-wide, plus sign, left-justified
  printf("'%-+5d'", 10);
  printf("\n");

  // quick float example
  // Eight-wide, two after the decimal
  printf("'%8.2f'", 10.3456);
  printf("\n");
  // string
  printf("%s\n", "Hello");
  // 10 char string
  printf("%10s\n", "Hello");
  // 10 char left justified
  printf("%-10s\n", "Hello");
  printf("\n");
}
