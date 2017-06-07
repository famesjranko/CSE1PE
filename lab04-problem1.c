

#include <stdio.h>

int main()
{
	int week = 7;
	float days[7], total = 0, average;
	
	printf("\nPlease enter the average daily temperature for the last seven days.\n\n");

	for(int i = 0; i < week; i ++)
	{
		printf("Enter temperate for day%2d: ",i+1);
		scanf("%f", &days[i]);
		total += days[i];
	}

	average = total / week;

	printf("\nTomorrow's forecast is: %.1fc\n", average);

	return 0;
}