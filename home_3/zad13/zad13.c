#include <stdio.h>
#include "days.c"

int main()
{

    struct date date1, date2;
    int result;

    printf("Podaj pierwsza date w formacie: DD/MM/YY\n");
    scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);
    printf("\nPodaj druga date w formacie: DD/MM/YY\n");
    scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);

    if (!is_valid(date1.day, date1.month, date1.year) || !is_valid(date2.day, date2.month, date2.year))
    {
        printf("Cos poszlo nie tak! Moze niepoprawny format daty? \n");
        return 0;
    }
    else
    {
        result = daysdiff(date1, date2);
        printf("Roznica dni wynosi:\t%d\tdni\n", result);
    }

    return 0;
}
