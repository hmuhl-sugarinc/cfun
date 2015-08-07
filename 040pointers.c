#include <stdio.h>

int main() {
  int i = 1234;

  printf("The value of i is %d.\n", i);
  printf("The address of i is 0x%0lX.\n", &i);

  // This is a pointer variable.
  // This variable holds an address of an int
  int *p;
  p = &i;

  // That could have also been written like this.
  //
  // int *p = &a;
  //
  // But that's sort of confusing.

  printf("The value of p is 0x%0lX.\n", p);
  printf("The address of p is 0x%0lX.\n", &p);
  printf("The variable p is pointing to an int with value %d.\n", *p);

  // How big is a pointer? That is, how many bytes long is a memory address?

  printf("A pointer is %lu bytes long.\n", sizeof(p));
}