#include <stdio.h>

int occurrences(int array[], int length, int to_find)
{
	int count = 0;

	for ( int i = 0; i < length; i++)
	{
		if(array[i] == to_find) count++;
	}

	return count;
}

int main(void)
{
	int myarray1[] = {4, 9, 7, 6, 6, 5, 7, 8, 8, 1};
	int myarray2[] = {0, 0, 1, 1, 2, 3, 4, 4};
	
	int findarr1_6 = occurrences(myarray1, 10, 6);
	int findarr2_0 = occurrences(myarray2, 8, 0);

	printf("# of 6s in array 1: %d\n", findarr1_6);
	printf("# of 0s in array 2: %d\n", findarr2_0);


	return 0;
}

