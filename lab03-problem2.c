#include<stdio.h>

int main()
{
	
	char input, run;
	int nights, s, l, m;
	float cost;
	
	s = 8; 
	m = 11;
	l = 14;
	
	printf("Welcome to the Dog Boarding House Company.\nWe have set up a small program to help you calculate the cost for your dog's stay with us. \n\n");
	printf("Press ENTER to continue");
	getchar();
	
	do {
		printf("\nPlease input your dogs size (s)mall / (m)edium / (l)arge: ");
		scanf("%c", &input);
		getchar();
	
		while (input != 's' && input != 'm' && input != 'l')
			{
			printf("Sorry, a value of (s) (m) or (l) must be used. \nPlease try again: ");
			scanf("%c", &input);
			getchar();
			} 
	
		printf("How many nights will your dog be staying? ");
		scanf("%d", &nights);
	
		while ( nights <= 0 )
			{ 
			printf("Sorry, nights stayed cannot be a letter and must be larger than zero. \nPlease try again ");
			scanf("%d", &nights);
			getchar();
			}
	
		if ( input == 's' ) 
			{
			cost = (s * nights);
			printf("\ncost: $%.2f\n", cost);
			}	
	
		else if ( input == 'm' )
			{
			cost = (m * nights);
			printf("\ncost: $%.2f\n", cost);
			}
	
		else if ( input == 'l' )
			{
			cost = (l * nights);
			printf("\ncost: $%.2f\n", cost);
			}
	
	printf("\nPress 'y' if you would like to calculate the cost of another dog's stay.\nOr press any other key to exit.\n");
	getchar();
	scanf("%c", &run);
	
	} while  (run == 'y') ;
	
	printf("Program has ended, press ENTER to close");
	getchar();
	
	return (0);
}
	
	
