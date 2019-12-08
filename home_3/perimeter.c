#include <math.h>

float perimeter(struct POINT a, struct POINT b, struct POINT c)
{
    int vec_ab[2] = {(b.x - a.x), (b.y - a.y)};
    int vec_ac[2] = {(c.x - a.x), (c.y - a.y)};
    int vec_bc[2] = {(c.x - b.x), (c.y - b.y)};

    float len_ab = sqrtf((vec_ab[0] * vec_ab[0]) + (vec_ab[1] * vec_ab[1]));
    float len_ac = sqrtf((vec_ac[0] * vec_ac[0]) + (vec_ac[1] * vec_ac[1]));
    float len_bc = sqrtf((vec_bc[0] * vec_bc[0]) + (vec_bc[1] * vec_bc[1]));

    return len_ab + len_ac + len_bc;
}
