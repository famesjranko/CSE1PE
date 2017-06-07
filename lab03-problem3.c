#include<stdio.h>
#include <ctype.h>

int main()
{

float a, c;

c = 0;

printf("Please input numbers to be added.\n");
printf("When you want to finalise your calculation, input '0'\n\n");
printf("WARNING: input other than numberical will lead to catastrophic break...\nYou have been warned.\n\n");

do{
	printf("input number: ");
   scanf("%f", &a);
   
   getchar();

   c += a;

} while ( a != 0 );

printf("total: %f", c);
	
getchar(),getchar();

return 0;
}
