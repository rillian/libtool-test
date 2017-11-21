#include <stdio.h>

int bar();

int main() {
  int number = bar();

  printf("Hello %d\n", number);

  return 0;
}
