#include<stdio.h>
#include<math.h>

int main() {
   double number, abs;
   
   printf("\nPlease input a number to find its absolute value: ");
   scanf("%lf", &number);
   
   abs =  fabs(number);
   
   printf("\nThe absolute value of your number is: %lf \n", abs);
   
   
   printf("\nPress ENTER to terminate the program \n");
   getchar(); getchar();
   	
   return (0);
}