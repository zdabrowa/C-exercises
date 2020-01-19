#include <string.h>
#define MAX_WORD_LEN 100

void sortstr(char **array, int len)
{
    int i, j;
    char temp[MAX_WORD_LEN];

    for (j = 0; j < len - 1; j++)
    {
        for (i = j + 1; i < len; i++)
        {
            if (strcmp(array[j], array[i]) > 0)
            {
                strcpy(temp, array[j]);
                strcpy(array[j], array[i]);
                strcpy(array[i], temp);
            }
        }
    }
}