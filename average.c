#include <stdio.h>

int main(void)
{
	double arr1[] = {5.2, 9.3, 6.5, 4.1, 7.8};

	printf("the average is %.2lf", average(arr1, 5);

	return 0;
}

double average(double array[]; int length);
{
	
	double sum =0;
	double average = 0;

	for (int i = 1;i < length; i++)
	{
		sum = sum + array[i];
	}
	return sum/length;

}
