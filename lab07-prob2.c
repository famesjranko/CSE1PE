#include <stdio.h>

float calc(float a,float b,float c, float d,float e, float z);
float av(float g,int h, float x);

int main()
{
   float ass1, ass2, lab, quiz, exam, total=0, average=0;
   int student=0;

   printf("Enter assignment 1 mark (-1 to quit): ");
   scanf(" %f", &ass1);
   
   while (ass1 != -1)
   {
		printf("Enter assignment 2 mark: ");
		scanf(" %f", &ass2);
		printf("Enter laboratory mark: ");
		scanf(" %f", &lab);
		printf("Enter quiz mark: ");
		scanf(" %f", &quiz);
		printf("Enter exam mark: ");
		scanf(" %f", &exam);
	   
		total = calc(ass1, ass2, lab, quiz, exam, total);
		
		student++;
		
		printf("\nStudent %d final mark: %f\n", student, total);
		
		total= total+total ;
		
		printf("Enter assignment 1 mark (-1 to quit): ");
		scanf(" %f", &ass1);
	}

	
	if (student > 1)
	{
		average = av(total, student, average);
		printf("\nThe average student mark is %f\n", average);
		printf("Goodbye");
	}
	
	return 0;
}

float calc(float a,float b,float c,float d,float e, float z)
{
	z = (a *.10) + (b *.15) + (c *.15) + (d *.10) + (e *.50);
	float total = z;
	return total;
}

int student(f)
{
	int student=+f;
	return student;
}

float av(float g, int h, float x)
{
	x = g / h;
	float average = x;
	return average;
}
