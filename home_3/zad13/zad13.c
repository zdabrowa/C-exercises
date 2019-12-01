#include <stdio.h>
#include "days.h"
#include "days.c"

int main()
{

    int result = 0;
    int days1 = 0;
    int days2 = 0;
    struct date date1, date2;

    printf("Podaj pierwsza date w formacie: DD/MM/YY\n");
    scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);
    printf("\nPodaj druga date w formacie: DD/MM/YY\n");
    scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);

    if (!is_valid(date1.day, date1.month, date1.year) || !is_valid(date2.day, date2.month, date2.year))
    {
        printf("Dane sa niepoprawne");
        return 0;
    }

    days1 = calculate_days(date1.day, date1.month, date1.year);
    days2 = calculate_days(date2.day, date2.month, date2.year);
    result = daysdiff(days1, days2);

    printf("Roznica dni wynosi:\t%d\tdni\n", result);

    return 0;
}
