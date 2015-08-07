#include <stdio.h>

int main() {
  char c = 1;
  short s = 2;
  int i = 3;
  long l = 4;

  printf("char c is %d, short s is %d, int i is %d, long l is %d\n", c, s, i, l);

  i = 8675309;

//  printf("The number %d is %X in hexadecimal\n", i, i);

  l = 3735928559;

//  printf("The number %d is %X in hexadecimal\n", l, l);

}