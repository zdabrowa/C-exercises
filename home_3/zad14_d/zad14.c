#include <stdio.h>
#include <math.h>
#include "area.c"
#include "perimeter.c"

int is_triangle(struct POINT *a, struct POINT *b, struct POINT *c)
{
    int vec_ab[2] = {((*b).x - (*a).x), ((*b).y - (*a).y)};
    int vec_ac[2] = {((*c).x - (*a).x), ((*c).y - (*a).y)};
    int vec_bc[2] = {((*c).x - (*b).x), ((*c).y - (*b).y)};

    float len_ab = sqrtf((vec_ab[0] * vec_ab[0]) + (vec_ab[1] * vec_ab[1]));
    float len_ac = sqrtf((vec_ac[0] * vec_ac[0]) + (vec_ac[1] * vec_ac[1]));
    float len_bc = sqrtf((vec_bc[0] * vec_bc[0]) + (vec_bc[1] * vec_bc[1]));

    if (((len_ab + len_ac) > len_bc) && ((len_bc + len_ab) > len_ac) && ((len_bc + len_ac) > len_ab))
        return 1;
    else
        return 0;
}

int main()
{
    struct POINT a, b, c;

    printf("Podaj wspolrzedne punktow A, B, C w formacie (x,y) (x,y), (x,y) : \n");
    scanf("(%d,%d) (%d,%d) (%d,%d)", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);

    if (!is_triangle(&a, &b, &c))
    {
        printf("Z podanych punktow nie mozna utworzyc trojkata! ");
        return 0;
    }
    else
    {

        printf("Pole:  %.2f\n", area(a, b, c));
        printf("Obwod:  %.2f\n", perimeter(a, b, c));
        return 0;
    }

    /* printf("Punkt a: (%d, %d)\n", a.x, a.y);
    printf("Punkt b: (%d, %d)\n", b.x, b.y);
    printf("Punkt c: (%d, %d)\n", c.x, c.y);*/
}
