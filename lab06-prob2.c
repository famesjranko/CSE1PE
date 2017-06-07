#include <stdio.h>
#include <ctype.h>

char operator(void);
float calculate(char c);

float total = 0;
char choice;

int main(void)
{
	operator();
	
	while (choice != 'q') {
		calculate(choice);
		operator();
	}
	
	return 0;
}

char operator()
{
	printf("Please choose the operator to use (V, A ,W) or q to quit: ");
	scanf("%c", &choice);
	//tolower(choice);

	while (choice != 'v' && choice != 'a' && choice != 'w' && choice != 'q' && choice != 'V' && choice != 'A' && choice != 'W' && choice != 'Q') {
		printf("\nError, invalid input: No operator was chosen. ");
		printf("\nPlease choose the operator to use (+, - *, /) or q to quit: ");
		scanf("%c", &choice);
	}

	return choice;
}

float calculate(char c)
{
	float a = 0, b = 0;

	switch ( c ) {
		case 'v': {
	        printf("Enter Amps: ");
	        scanf("%f", &a);
	        printf("Enter Watts: ");
	        scanf("%f", &b);
        	total = b / a;
	        printf("Result: %.2fV\n", total);
			break;
		}
	    case 'a': {
	    	printf("Enter Volts: ");
	        scanf("%f", &a);
	        printf("Enter Watts: ");
	        scanf("%f", &b);
	        total = b / a;
	        printf("Result: %.2fA\n", total);
			break;
        }
	    case 'w': {
	        printf("Enter Volts: ");
	        scanf("%f", &a);
	        printf("Enter Amps: ");
	        scanf("%f", &b);
	        total = a * b;
	        printf("Result: %.2fW\n", total);
			break;
        }  
    }

    return 0;
}
