#include <stdio.h>

int marks_summation(int *marks,int number_of_students,char gender)
{
	int counter;
	int sum;

	counter = 0;
	sum = 0;
	if(gender == 'b')
	{
		while(counter < number_of_students)
		{
			sum = sum + marks[counter];
			counter = counter + 2;
		}
	}
	else if(gender == 'g')
	{
		counter = 1;
		while(counter < number_of_students)
		{
			sum = sum + marks[counter];
			counter = counter + 2;
		}
	}
	return sum;
}
