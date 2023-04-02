#include <stdio.h>

int main() {
   int num1, num2;
   float avg;

   printf("Enter the first number: ");
   scanf("%d", &num1);

   printf("Enter the second number: ");
   scanf("%d", &num2);

   avg = (float)(num1 + num2) / 2;

   printf("The average of %d and %d is %.2f", num1, num2, avg);

   return 0;
}
