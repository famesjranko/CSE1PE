#include<stdio.h>


int main() {

	float billprice, disc_price;
	int beforedue;

	printf("How much is the current bill? ");
	scanf("%f", &billprice);

	disc_price = billprice - (billprice*.10);
   
	puts("Is the bill passed its due date? press 1 if yes, press any other key for no: ");
	scanf("%i", &beforedue);

	if ( beforedue == 1 )
	{
		printf("\nCongratulations you have earnt a discount");
		printf("\nYour price was $%.2f", billprice);
		printf( "\nYour new price is $%.2f", disc_price);
	}

	else
	{
		printf("\nYour bill date has passed and you are required to pay price in full");
		printf("\nYour full bill is : $%.2f", billprice);
	}
 
	printf("\nPress ENTER to terminate the program \n");
	getchar(); getchar();
  
	return (0);
}   