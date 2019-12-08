#include <stdio.h>

void swap(int *x, int *y)
{
    int z = 0;
    z = *x;
    *x = *y;
    *y = z;
}

int main()
{

    int x, y;

    printf("Podaj dwie liczby do zamiany: \n");
    scanf("%d%d", &x, &y);

    printf("Przed zamiana: %d  %d \n", x, y);
    swap(&x, &y);
    printf("Po zamianie: %d  %d \n", x, y);

    return 0;
}
