#include <stdio.h>
#include <stdlib.h>

int main() {
  // audible
  printf("Audible or visual alert. \a\n");
  // newline
  printf("HELLO \n");
  // backspace
  printf("HELLO\b backspace \n");
  // form feed
  printf("\fForm feed. \f\n");
  // carriage return observe output
  printf("printed-1.");
  printf("\rprinted-2.");
  printf("\n");
  // horizontal tab sequence
  printf("val1\tval2\n");
  // vertical tab sequence
  printf("val1\vval2\vval3\n");
  // backslash
  printf("slash\\slash\n");
  // single and double quote
  printf("\'single quote\' \"double quote\"\n");
  // question mark
  printf("\? \n");
  // octal 112 = decimal 74 = ascii char J
  printf("\112\n");
  // hex 4a = 74 = decimal 74 = ascii char J
  printf("\x4a \n");
  return EXIT_SUCCESS;
}
