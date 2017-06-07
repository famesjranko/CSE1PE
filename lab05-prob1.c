#include <stdio.h>

int main()
{
	int i, a, average = 8700, total=0;
	int *calories;

    printf("Enter number of meals/snacks: ");
	scanf("%d", &a);
	calories = malloc(sizeof(int)*a);
	
	for (i = 0; i < a; i++)
	{
		printf("Enter kilojoules for item %d: ",i+1);
    	scanf("%d", &calories[i]);
    	total += calories[i];
    }
	
	free(calories);
	
    if (total > average) 
    {
    	printf("Your intake today is %dkj - above the average intake of %dkj", total, average);
    }

    else if (total < average) 
    {
    	printf("Your intake today is %dkj - below the average intake of %dkj", total, average);
    }

    else if (total = average) 
    {
    	printf("Your intake today is the same as the average intake of 8700kj.");
    }

    else
    	printf("something went wrong");

    return 0;
}