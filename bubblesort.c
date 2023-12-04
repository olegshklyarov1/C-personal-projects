#include <stdio.h>

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int swapped = 0;

        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swapped = 1;
            }
        }

        if (swapped == 0)
            break;
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{

    int array[] = {1, 2, 5, 7, 9, 6, 3, 4, 8};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Sorted array: ");
    sort(array, size);
    printArray(array, size);

    return 0;
}
