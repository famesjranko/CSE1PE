#include<stdio.h>


int main() 
{
   float ticket_65, ticket_18;
   int age;
   
   ticket_65 = 10.00;
   ticket_18 = 12.50;
   
   printf("At Cinema Horror, our ticket prices are structured based on age. \n\n"); 
   printf("Senior citizens (over the age of 65) are charged $10. \n");
   printf("Patrons over the age of 18 are charged $12.50. \nUnder-age patrons aren\'t allowed in.\n");
   
   printf("\nPlease enter patron's age to calculate correct ticket price: ");
   scanf("%d", &age);
   
   if ( age < 18  )
   {
	   printf("\nThis patron is not old enough to purchase ticket.\n");
   }
   
   if ( age >= 18 )  
   {
	    if( age < 65  )
		{
			printf("\nThis patron is 18 or older, but younger than 65");
			printf("\nPrice of ticket is: $%.2f\n", ticket_18);
		}
	   
		if ( age >= 65 )
		{	
			printf("\nThis patron is 65 or older.");
			printf("\nPrice of ticket is: $%.2f\n", ticket_65);
		}
   }
   
   printf("\nProgram has run successfully, press ENTER to terminate the program \n");
   getchar(), getchar();
   	
   return (0);
}