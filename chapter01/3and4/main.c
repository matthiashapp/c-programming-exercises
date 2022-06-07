#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

// fahr to celsius
double ftoc(int f) { return (5.0 / 9.0) * (f - 32); }

// kelvin to celsius
double ktoc(int k) { return k - 273.15; }

// celsius to fahrenheit
double ctof(int c) { return (c * 9.0 / 5.0) + 32; }

int main() {
  int fahr;
  printf("%-10s %-10s\n", "fahrenheit", "celsius");

  for (fahr = UPPER; LOWER <= fahr; fahr -= STEP) {
    printf("%-10d %-10.2f\n", fahr, ftoc(fahr));
  }

  for (int i = 0; i < 50; i++) {

    printf("=");
  }

  printf("\n");
  // kelvin heading
  printf("%-10s %-10s\n", "kelvin", "celsius");
  int kelvin;
  for (kelvin = LOWER; kelvin <= UPPER; kelvin += STEP) {
    printf("%-10d %-10.2f\n", kelvin, ktoc(kelvin));
  }

  return EXIT_SUCCESS;
}
