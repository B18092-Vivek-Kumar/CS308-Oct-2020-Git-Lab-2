
typedef struct vec{
    float x,y,z,w;
}vector;

void printVector(vector v);

vector add(vector v1, vector v2);

vector product(vector v1, vector v2);

vector difference(vector v1, vector v2);

float dot_product(vector v1, vector v2);

float angle(vector v1, vector v2);
