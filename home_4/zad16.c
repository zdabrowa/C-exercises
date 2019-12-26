#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "sortint.h"

#define BUBBLE "bubble"
#define MERGE "bubble"

void print_array(int *array, int len)
{

    for (int i = 0; i < len; i++)
    {
        printf(" %d ", array[i]);
    }

    printf("\n");
}

void print_instruction()
{
    printf("usage: zad16 -n name\n");
    printf("\nname: \n");
    printf("merge - for merge sort\n");
    printf("bubble - for bubble sort\n");
}

int main(int argc, char *argv[])
{
    int opt;
    extern char *optarg;
    int *to_sort;
    int length;

    //int array[] = {1, 43, 25, -11, 6, 79, 0, -11, -1, 123, 121, 157, 11, 89, 9, 7, 4, 5, 6, 1};
    // int length = sizeof(array) / sizeof(array[0]); //length of given array

    if (argc == 1)
    {
        print_instruction();
        return 0;
    }

    while ((opt = getopt(argc, argv, "n:")) != -1)
    {

        if (opt == 'n')
        {
            int i = 0;

            printf("Podaj wielkosc tablicy: \n");
            scanf("%d", &length);

            to_sort = malloc(length * sizeof(int));

            for (i = 0; i < length; i++)
            {
                printf("Podaj %d do wpisania: ", i + 1);
                scanf("%d", &to_sort[i]);
                printf("\n");
            }

            printf("Tablica przed: ");
            print_array(to_sort, length);

            if (strcmp(optarg, BUBBLE) == 0)
            {
                bubble_sort(to_sort, length);
            }
            else if (strcmp(optarg, MERGE) == 0)
            {
                merge_sort(to_sort, 0, length - 1);
            }
            else
            {
                printf("Something went wrong");
                return 1;
            }

            printf("Tablica po: ");
            print_array(to_sort, length);

            free(to_sort);
            to_sort = NULL;
        }
        else
        {
            printf("Something went wrong");
            return 1;
        }
    }

    return 0;
}
