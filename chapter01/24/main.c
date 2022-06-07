#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *buffer;
  size_t bufsize = 512;
  size_t chars;

  buffer = (char *)calloc(bufsize, sizeof(char));
  if (buffer == NULL) {
    perror("Unable to allocate buffer");
    exit(1);
  }

  printf("Type something: ");
  chars = getline(&buffer, &bufsize, stdin);
  printf("%zu characters were read.\n", chars);
  printf("You typed: '%s'", buffer);

  return (0);
}
