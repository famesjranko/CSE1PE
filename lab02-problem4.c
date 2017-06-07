#include<stdio.h>
#define M_PI 3.14159265358979323846

int main() 
{
	float area_washer, area_outercirlc, area_innercircle, d_outer, d_inner, radius_inner, radius_outer;
	
	printf("Enter outer diameter: ");
	scanf("%f", &d_outer);

	printf("Enter inner diameter: ");
	scanf("%f", &d_inner);

	radius_inner = d_inner/2;
	area_innercircle = M_PI * (radius_inner*radius_inner);

	radius_outer = d_outer/2;
	area_outercirlc = M_PI * (radius_outer*radius_outer);

	area_washer = area_outercirlc - area_innercircle;

	if ( d_inner <= 0 || d_outer <= 0 ){
		printf("invalid inputs: Both diameters must be positive\n");
		printf("\nProgram has run successfully, press ENTER to terminate the program \n");
		getchar(), getchar();
		}
	
	else if ( d_inner >= d_outer ){
		printf("invalid inputs: Inner diameter must be less than outer diameter\n");
		}
	
	else if ( d_inner > 0 && d_outer > 0 && d_inner < d_outer ){
		printf("Surface area: %f\n", area_washer);
		printf("\nProgram has run successfully.\n");
		getchar(), getchar();
		}

	printf("\nPress ENTER to terminate the program \n");
	getchar(), getchar();

   	
	return (0);
}