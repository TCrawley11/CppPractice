#include "complex.h"
#include "vector.h"
#include <iostream>

int main()
{
    int n = 5;
    Vector v = Vector(n);

    for(int i=0; i!=v.size();++i){
        std :: cout << v[i] << " ";
    }
    return 0;
}