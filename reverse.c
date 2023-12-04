#include <stdio.h>

void reverse (int array[], int length)
{
	int temp = 0;

	for (int i = 0; i < (length / 2); i++)
	{
		temp = array[i];
		array[i] = array[lenght - i - 1];
		array[length - i - 1] = temp;
	}
}
