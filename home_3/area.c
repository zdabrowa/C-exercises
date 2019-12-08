#include "point.h"

float area(struct POINT a, struct POINT b, struct POINT c)
{
    int vec_ab[2] = {(b.x - a.x), (b.y - a.y)};
    int vec_ac[2] = {(c.x - a.x), (c.y - a.y)};

    float area = ((vec_ab[0] * vec_ac[1]) - (vec_ab[1] * vec_ac[0])) * 0.5;

    if (area < 0)
        return area * (-1);
    else
        return area;
}
