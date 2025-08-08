/******************
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int num, position;
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int result = (num >> position) & 1;
  printf("The bit in position %d of number %d is: %d\n", position, num, result);
  
  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int whenOff = ~(1 << position);
  int resultOff = num & whenOff;
  int whenOn = 1 << position;
  int resultOn = num | whenOn;
  printf("Number with bit %d set to 1: %d\n", position, resultOn);
  printf("Number with bit %d set to 0: %d\n", position, resultOff);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int toToggle = 1 << position;
  result = num ^ toToggle;
  printf("Number with bit %d toggled: %d\n", position, result);
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  result = 1 - (num & 1);
  printf("%d\n", result);

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int num2;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &num);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &num2);
  result = num + num2;
  int bit3 = (result >> 3) & 1;
  int bit5 = (result >> 5) & 1;
  int bit7 = (result >> 7) & 1;
  int bit11 = (result >> 11) & 1;
  printf("The sum in hexadecimal: %X\n", result);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);

  printf("Bye!\n");
  
  return 0;
}
