#include <stdio.h>

char operator(void);
float input(void);
float calculate(float a, float b, char c);

float total = 0;
float numbers[2] = {0};
char choice;

int main(void)
{
	operator();
	
	while (!(choice == 'q'|| choice == 'Q')) {
		input();
		calculate(numbers[0], numbers[1], choice);
		operator();
	}

	return 0;
}

char operator(void)
{
	printf("Please choose the operator to use (+, - *, /) or q to quit: ");
	scanf("%c", &choice);

	while (choice != '+' && choice != '-' && choice != '*' && choice != '/' && choice != 'q' && choice != 'Q') {
		printf("\nError, invalid input: No operator was chosen. ");
		printf("\nPlease choose the operator to use (+, - *, /) or q to quit: ");
		scanf("%c", &choice);
	}

	return choice;
}


float input(void)
{
	printf("Input the first number: ");
	scanf("%f", &numbers[0]);
	printf("Input the second number: ");
	scanf("%f", &numbers[1]);
	
	return numbers[2]; 
}

float calculate(float a, float b, char c)
{
	switch ( c ) {
		case '+': {
			total = a + b;
	        printf("%.3f %c %.3f = %.3f\n", a, c, b, total);
			break;
	    }
	    case '-': {
	        total = a - b;
	       	printf("%.3f %c %.3f = %.3f\n", a, c, b, total);
			break;
	    }
	    case '*': {
	        total = a * b;
	        printf("%.3f %c %.3f = %.3f\n", a, c, b, total);
			break;
	    }
	    case '/': {
	        if (b == 0){
	        	printf("Error: Cannot divide by 0. \nReturning to the main menu...\n");
	        	break;
	        } else {
	        	total = a / b;
	        	printf("%.3f %c %.3f = %.3f\n", a, c, b, total);
				break;
			}
	    }
    }
    
    return 0;
}
