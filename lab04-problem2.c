#include <stdio.h>

int main()
{

	int populate_data[8], total=0, i;
	char *strs[8] = {"ACT", "NSW", "NT", "QLD", "SA", "TAS", "VIC", "WA"};
   

	for (i=0; i<8; i++)
	{
		printf("%s population: ", strs[i]);
		scanf("%d", &populate_data[i]);
		total += populate_data[i];
	}

printf("Total Australian population: %d\n", total);

return 0;

}
