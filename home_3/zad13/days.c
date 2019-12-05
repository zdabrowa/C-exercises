#include "days.h"

int is_leap(int y)
{
    if (y % 4 == 0)
    {
        if (y < 1528) // is gregorian?
        {
            return 1;
        }
        else
        {
            if (y % 100 == 0 && y % 400 != 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }
}

int is_valid(int d, int m, int y) //checks if given date is valid
{

    if (m >= 1 && m <= 12)
    {

        if (m == 2 && is_leap(y) == 1 && d <= 29)
        {
            return 1;
        }
        else if (m == 2 && d <= 28)
        {
            return 1;
        }
        else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31)
        {
            return 1;
        }
        else if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30)
        {
            return 1;
        }
        else
            return 0;
    }
    else
        return 0;
}

int calculate_days(int d, int m, int y) //calculates julian days from given date
{                                       //a, x, z, w, v  - temp vars, formula is found on the Internet
    int a = y / 100;
    if (m < 3)
    {
        y = y - 1;
        m = m + 12;
    }
    int x = 365.25 * (y + 4716);
    int z = 30.6001 * (m + 1);
    int w = a / 4;
    int v = 2 - a + w;

    if (y >= 1528) //is gregorian?
    {
        return x + z + d + v;
    }
    else
    {
        return x + z + d;
    }
}

int daysdiff(struct date date1, struct date date2)
{
    int days1 = calculate_days(date1.day, date1.month, date1.year);
    int days2 = calculate_days(date2.day, date2.month, date2.year);

    if (days1 - days2 < 0)
        return ((days1 - days2) * (-1));
    else
        return days1 - days2;
}
