#include <stdio.h>

//first - first element of array on the left side
//last - last element of array on the right side
//middle - middle element of an array

void merge(int *array, int first, int last, int middle)
{
    int x, y;
    int z = first;                 //initial index of merged array
    int len1 = middle - first + 1; //length of first temporary array(left)
    int len2 = last - middle;      //length of second temporary array(right)

    int left_array[len1];
    int right_array[len2];

    for (x = 0; x < len1; x++)
    {
        left_array[x] = array[first + x];
    }

    for (y = 0; y < len2; y++)
    {
        right_array[y] = array[middle + 1 + y];
    }

    x = 0; //initial index of left_array
    y = 0; //initial index of right_array

    //merge temp arrays into one
    while (x < len1 && y < len2)
    {
        if (left_array[x] <= right_array[y])
        {
            array[z] = left_array[x];
            x += 1;
        }
        else
        {
            array[z] = right_array[y];
            y += 1;
        }

        z += 1;
    }

    //copies remaining  elements to sorted array
    while (x < len1)
    {
        array[z] = left_array[x];
        x += 1;
        z += 1;
    }

    while (y < len2)
    {
        array[z] = right_array[y];
        y += 1;
        z += 1;
    }
}

void merge_sort(int *array, int first, int last)
{
    if (first < last)
    {
        int middle = first + (last - first) / 2;

        // printf("Merge od 0 do srodka\n");

        merge_sort(array, first, middle);

        // printf("Merge od srodka do konca\n");
        merge_sort(array, middle + 1, last);

        // printf("Zlepianie tablic\n");
        merge(array, first, last, middle);
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

    int array[] = {1, 43, 25, -11, 6, 79, 0, -11, -1, 123, 121, 157, 11, 89, 9, 7, 4, 5, 6, 1};
    int length = sizeof(array) / sizeof(array[0]); //length of given array

    printf("Tablica przed: ");
    print_array(array, length);

    merge_sort(array, 0, length - 1);

    printf("Tablica po: ");
    print_array(array, length);

    return 0;
}
