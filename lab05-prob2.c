#include <stdio.h>

int main()
{
	float *times, total=0, average_speed=0, slowest_time;
	int distance, a, i;

	printf("Enter the race distance (m): ");
	scanf("%d", &distance);

	printf("Enter the number of lanes in use: ");
	scanf("%d", &a);
	
	times = (float*)malloc(sizeof(int)*a);

	for (i=0; i<a; i++)
	{
		
		printf("Enter finish time for lane %d (sec): ",i+1);
    	scanf("%f", &times[i]);
    	total += times[i];
	}
	
	free(times);
	
	slowest_time = times[0];
 
   	for (i = 0; i < a; i++) 
   	{
   		if (times[i] > slowest_time) 
   		{
   			slowest_time = times[i];
   		}
   	}

    average_speed = (18*(distance / slowest_time))/5;

   	printf("The slowest time was %.1f seconds, for an average speed of %.1fkm/h.\n", slowest_time, average_speed);
	
	return 0;
	
}