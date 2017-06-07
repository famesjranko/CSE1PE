#include<stdio.h>


int main() {

	float billprice, disc_price15, disc_price12;
	char beforedue;

	printf("How much is the current bill? ");
	scanf("%f", &billprice);

	disc_price15 = billprice - (billprice*.15);
	disc_price12 = billprice - (billprice*.12);
   
	puts("Is the current bill being paid before its due date? press y/n : ");
	getchar();
	scanf("%c", &beforedue);
	getchar();
	
	if (beforedue == 'y')
	{
	
		if  (billprice >=100)
		{printf("\nCongratulations! You have earnt a discount for paying early");
			printf("\nYour current bill was: $%.2f", billprice);
			printf( "\nYour new discounted bill is: $%.2f", disc_price15);
		}
		if (billprice <100)
		{
			printf("\nCongratulations! You have earnt a discount for paying early");
			printf("\nYour current bill was: $%.2f", billprice);
			printf( "\nYour new discounted bill is: $%.2f", disc_price12);
		}
	}
		
	else 
	{
		printf("\nYour bill date has passed and you are required to pay price in full");
		printf("\nYour full bill is : $%.2f", billprice);
	}	
	
	printf("\nPress ENTER to terminate the program \n");
	getchar();
  
	return (0);
}   