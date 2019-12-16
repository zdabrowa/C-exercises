#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int *array, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

void print_array(int *array, int len)
{

    for (int i = 0; i < len; i++)
    {
        printf(" %d ", array[i]);
    }

    printf("\n");
}

int main()
{
    int array[] = {30. - 13, 11, 19, -100, 0, -1, 23, 54, 643, 45, -11, -31, 4, 5, 6, 19};
    int len = sizeof(array) / sizeof(array[0]);

    printf("Tablica przed: ");
    print_array(array, len);

    bubble_sort(array, len);

    printf("Tablica po: ");
    print_array(array, len);

    return 0;
}
