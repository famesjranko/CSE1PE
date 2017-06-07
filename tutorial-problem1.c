#include<stdio.h>


int main() {
   int length, width, area, peri;
   
   printf("\nEnter length in metres : ");
   scanf("%d", &length);
   
   printf("\nEnter width in metres : ");
   scanf("%d", &width);
   
   area = length * width;
   peri = ( length + width ) * (2);
   
   printf("\nArea : %d""m^2", area);
   printf( "\nPerimeter : %d""m""\n", peri);
   
   printf("\nPress ENTER to terminate the program \n");
   getchar(); getchar();
   	
   return (0);
}