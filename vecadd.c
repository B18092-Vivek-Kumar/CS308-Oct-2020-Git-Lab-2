#include "vector.h"

vector add(vector v1,vector v2){
	vector res;
	
	res.x=v1.x+v2.x;
	res.y=v1.y+v2.y;
	res.z=v1.z+v2.z;
	res.w=v1.w+v2.w;

	return res;
}