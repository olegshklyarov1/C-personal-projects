#include <stdio.h>

int sum(int array[], int length)
{
	int sum_value = 0;
	for (int i = 0; i < length; i ++)
	{
		sum_value = array[i] + sum_value;
	}
	return sum_value;
}

int main(void)
{
	int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int array2[] = {2, 4, 5, 6, 7, 9};
	int array3[] = {2, 5, 100, 400, 5};

	printf("array 1 sum : %d\n", sum(array1, 9));
	printf("array 2 sum : %d\n", sum(array2, 6));
	printf("array 3 sum : %d\n", sum(array3, 5));

	
}
