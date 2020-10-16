#include <math.h>

float norm(vector v1, vector v2) {
    vector v = difference(v1, v2);
    v = product(v, v);

    double res = sqrt(v.w + v.x + v.y + v.z);
    return res;
}