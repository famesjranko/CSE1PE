#include<stdio.h>


int main() 

{
	
	char breathing, pulse; 
	

	printf("Is the patient breathing? (y/n) ");
	scanf("%c", &breathing);
	getchar();
	
	if ( breathing == 'y' )
	{
		printf("\nAdvice: Put the paitent in the recovery position and call 000. \n"); 
		printf("\nProgram has run successfully, press ENTER to terminate the program \n");
		getchar();
	}
	
	else if ( breathing == 'n');
		{
		printf("Do they have a pulse? (y/n) ");
		scanf("%c", &pulse);
		
			if ( pulse == 'y' )
			{	printf("\nAdvice: Call 000 and provide mouth-to-mouth resuscitation until help arrives or they begin breathing on their own. \n");
				}	
		
			if ( pulse == 'n' )
			{	printf("\nAdvice: Call 000 and alternate between 30 chest compressions and 2 mouth-to-mouth breaths until help arrives. \n");
				
				}		
			}
	printf("\nProgram has run successfully, press ENTER to terminate the program \n");
	getchar(); getchar();
   	
	return (0);	
	
	}