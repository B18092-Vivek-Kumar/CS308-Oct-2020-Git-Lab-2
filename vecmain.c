#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void printVector(vector v,char* s){
	printf("%s of the given vectors: [ %f %f %f %f ]\n",s,v.x,v.y,v.z,v.w);
}

int main(){
    vector va={2,3,2,5},vb={3,4,5,6};

    //uncomment and test once the function is coded

    // printVector(add(va,vb),"Sum");
    // printVector(product(va,vb),"Element wise Product");
    // printVector(difference(va,vb),"Difference");
    
    // printf("Dot product of the given vectors: %f\n",dot_product(va,vb));
    // printf("Angle between the given vectors: %f\n",angle(va,vb));
}
