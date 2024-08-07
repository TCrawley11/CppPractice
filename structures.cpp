#include <iostream>

using namespace std;

struct Vector 
{
    int sz;
    double* elem; // pointer to elem
};

// we use the reference declarator to modify the original vector v, we pass it as a non-const reference
// the new keyword allocates memory from the free store, (AKA heap or dynamic memory). Objects allocated on the
// free store are independent of the scope, and live until they are destroyed using delete operator
void vector_init(Vector& v, int s)
{
    v.elem = new double[s]; // the elem attribute of the vector becomes a double array of size s
    v.sz = s;
}

// simple use of vector struct
double read_and_sum(int s)
// reads s inputs from cin and outputs their sum
{
    Vector v;
    vector_init(v,s);
    for (int i = 0; i != s; ++i)
        cin >> v.elem[i]; // allocate elem[i] as the user-input
    
    double sum = 0;
    for (int i = 0; i != s; ++i)
    {
        sum += v.elem[i];
    }
    return sum;
}

// we use . to access struct members through a name(and references). We use -> to access struct members through
// a pointer
void f(Vector v, Vector& rv, Vector* pv)
{
    int i1 = v.sz; // thru name (actual vector)
    int i2 = rv.sz; // thru reference
    int i3 = pv->sz; // thru pointer
}

void main() 
{
    cout << read_and_sum(5);
}