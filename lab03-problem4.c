#include <stdio.h>


int main()
{
	int time;
	
	printf("Current time: ");
	scanf("%d",&time);
   
	if (time > 0 )
	   {
		   do
		   {
			   printf("%d...\n",time);
			   time--;
		   }while(time>0);
		
		   printf("Blast Off!\n");
	   }
    
	else if ( time < 0 )
	   {
		   printf("We missed out opportunity to launch!\nWe'll have to try again tomorrow");
	   }
	
	else 
		   printf("launchtime and current time were the same.\nLaunch was successful without timer.");
	
	getchar(),getchar();
    
	return 0;
}
	
	
	
