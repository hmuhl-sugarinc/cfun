#include <stdio.h>

struct Point {
  short x;
  int y;
};

struct Person {
  unsigned char age; // in years
  unsigned short height; // in millimeters
  long wealth; // in pennies
};

int main() {
  struct Point p;

  printf("(%d, %d)\n", p.x, p.y);

  p.x = 99;
  p.y = 4321;

  printf("(%d, %d)\n", p.x, p.y);

  struct Person me;
  me.age = 34;
  me.height = 1842;
  me.wealth = 99999999999999; // yeah, right

  printf("I am %d years old, am %d millimeters tall, and have %ld pennies to my name\n",
      me.age, me.height, me.wealth);
}