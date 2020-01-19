#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "sortint.h"
#include "sortstr.h"

#define BUBBLE "bubble"
#define MERGE "merge"
#define SORT_STRING "sortstr"
#define MAX_WORD_LEN 100

void print_numbers(int *array, int len)
{
    int i = 0;

    for (i = 0; i < len; i++)
    {
        printf(" %d ", array[i]);
    }

    printf("\n");
}

void print_words(char **array, int len)
{
    int i = 0;

    for (i = 0; i < len; i++)
    {
        printf(" %s ", array[i]);
    }

    printf("\n");
}

void print_instruction()
{
    printf("usage: zad16 -n name\n");
    printf("\nname: \n");
    printf("merge - for merge sort\n");
    printf("bubble - for bubble sort\n");
    printf("sortstr - for sorting string in alphabetical order\n");
}

int main(int argc, char *argv[])
{
    int opt;
    extern char *optarg;
    int *numbers; //pointer to array of numbers that will be sorted
    char **words;
    int word_len;
    char word[MAX_WORD_LEN];
    int length; //length of  array to_sort

    if (argc == 1)
    {
        print_instruction();
        return 0;
    }

    while ((opt = getopt(argc, argv, "n:")) != -1)
    {

        if (opt == 'n')
        {
            int i;

            printf("Give me length of an array: \n");
            scanf("%d", &length);

            if (strcmp(optarg, SORT_STRING) == 0)
            {

                words = malloc(length * sizeof(char *));

                for (i = 0; i < length; i++)
                {
                    printf("Give me word number %d: ", i + 1);
                    scanf("%100s", word);
                    word_len = strlen(word);
                    words[i] = (char *)malloc(word_len * sizeof(char));
                    strcpy(words[i], word);
                }

                printf("Array before: \n");
                print_words(words, length);

                sortstr(words, length);

                printf("Array after: \n");
                print_words(words, length);

                for (i = 0; i < length; i++)
                {
                    free(words[i]);
                }

                free(words);
                return 0;
            }
            else if (strcmp(optarg, BUBBLE) == 0)
            {
                numbers = malloc(length * sizeof(int));

                for (i = 0; i < length; i++)
                {
                    printf("Give me %d number: ", i + 1);
                    scanf("%d", &numbers[i]);
                    printf("\n");
                }

                printf("Array before: \n");
                print_numbers(numbers, length);

                bubble_sort(numbers, length);

                printf("Array after: \n");
                print_numbers(numbers, length);

                free(numbers);
                return 0;
            }
            else if (strcmp(optarg, MERGE) == 0)
            {
                numbers = malloc(length * sizeof(int));

                for (i = 0; i < length; i++)
                {
                    printf("Give me %d number: ", i + 1);
                    scanf("%d", &numbers[i]);
                    printf("\n");
                }

                printf("Array before: \n");
                print_numbers(numbers, length);

                merge_sort(numbers, 0, length - 1);

                printf("Array after: \n");
                print_numbers(numbers, length);

                free(numbers);
                return 0;
            }
        }
        else
        {
            printf("Something went wrong. \n");
            print_instruction();
        }
    }
    return 0;
}