#include "vector.h"


// element-wise product of two vectors
vector product(vector a, vector b){
    vector res;
    res.x = a.x*b.x;
    res.y = a.y*b.y;
    res.z = a.z*b.z;
    res.w = a.w*b.w;

    return res; 
}