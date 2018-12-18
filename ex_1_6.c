#include <stdio.h>

/* Program verifying the value of EOF
Looks like C doesn't have booleans, and instead just relies on
1 == true, 0 == false */

int main() {
  printf("Attempting to evaluate the expression 'getchar() != EOF'.\n");
  printf("Note, pressing CTRL + D will simulate an EOF character.\n");
  printf("Please type any character and hit enter.\n");
  printf("The value of getchar() != EOF is: %d\n", getchar() != EOF);
}
