#include<stdio.h>


int main() {
   float price, cash, price_gst, change;
   
   printf("\nEnter product price : ");
   scanf("%f", &price);
   price_gst = (price + (price*.10));
   
   printf("Enter cash : ");
   scanf("%f", &cash);
   
   change = ( cash - price_gst );
   
   if ( cash < price_gst )
   {
	   printf("\nNot enough money to purchase item");
   }
   
   else 
   {
	   printf("\nItem price : $%.2f\n", price_gst);
	   printf("\nChange : $%.2f\n", change);
   }
   
   printf("\nProgram has run successfully, press ENTER to terminate the program \n");
   getchar(); getchar();
   	
   return (0);
}