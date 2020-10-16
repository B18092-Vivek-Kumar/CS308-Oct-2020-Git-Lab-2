#include "vecdot.c"
#include<math.h>
float angle(vector v1,vector v2){
	float mod_v1,mod_v2;
	mod_v1 = sqrt(v1.w*v1.w+v1.x*v1.x+v1.y*v1.y+v1.z*v1.z);
	mod_v2 = sqrt(v2.w*v2.w+v2.x*v2.x+v2.y*v2.y+v2.z*v2.z);
	return acos((v1.x*v2.x+v1.w*v2.w+v1.y*v2.y+v1.z*v2.z)/(mod_v1*mod_v2));
}
