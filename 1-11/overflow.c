#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main() {
  u_int16_t c = 65535;

  printf("value: %d\n", c);
  c++;
  printf("value: %d\n", c);
}
