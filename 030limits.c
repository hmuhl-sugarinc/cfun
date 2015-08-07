#include <stdio.h>
#include <limits.h>

int main() {
  printf("A char has %d bits\n", CHAR_BIT);

  printf("A char is %d bytes long\n", sizeof(char));
  printf("A short is %d bytes long\n", sizeof(short));
  printf("An int is %d bytes long\n", sizeof(int));
  printf("A long is %d bytes long\n", sizeof(long));
}