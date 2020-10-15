#include "vector.h"

float dot_product(vector v1,vector v2){
	float res;
	
	res = v1.x*v2.x;
	res = res + v1.y*v2.y;
	res = res + v1.z*v2.z;
	res = res + v1.w*v2.w;

	return res;
}