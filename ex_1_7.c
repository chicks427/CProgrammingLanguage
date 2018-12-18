#include <stdio.h>

/* Program verifying the value of EOF
Looks like C doesn't have booleans, and instead just relies on
1 == true, 0 == false */

int main() {
  printf("EOF has the value %1d\n", EOF);
}
