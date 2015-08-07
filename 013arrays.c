#include <stdio.h>

int main() {
  int buffer[16];
  int initialized[4] = {9, 8, 7, 6};

  for (int i = 0; i < 16; i++) {
    printf("Element %d of buffer is %d\n", i, buffer[i]);
  }

  for (int i = 0; i < 4; i++) {
    printf("Element %d of initialized is %d\n", i, initialized[i]);
  }
}