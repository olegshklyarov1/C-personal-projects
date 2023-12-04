#include <unistd.h>
#include <stdio.h>

int find_min(int array[], int length)
{
	int min;

	min = array[0];
	for (int i = 1; i < length; i ++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
	}

	return min;
}


int main (void)
{
	int MyArray1[] = {5, 9, 10, 11, 4, 3, 8, 6, 7};
	int MyArray2[] = {2, 5, 9, 2, 5, 6, 0};

	int min1 = find_min(MyArray1, 9);
	int min2 = find_min(MyArray2, 7);

	printf("min1 is %d\n", min1);
	printf("min2 is %d\n", min2);


	return 0;

}

