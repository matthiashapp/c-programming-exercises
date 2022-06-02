#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// fahr to celsius
double ftoc(int f) { return (5.0 / 9.0) * (f - 32); }
int main() {

  int fahr;
  printf("%-10s %-10s\n", "fahrenheit", "celsius");

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%-10d %-10.2f\n", fahr, ftoc(fahr));
  }

  return EXIT_SUCCESS;
}
