class Vector{
private:
    double* elem;
    int sz;
public:
    Vector(int s) :elem{new double[s]} ,sz{s} // constructor
    {
        for(int i = 0; i!=s;++i)
            elem[i] = 0;
    }

    ~Vector(){delete[] elem;} // destuctor, opens up space on the free store memory that was allocated by the constructor
    
    double& operator[](int i) {return elem[i]; } // element access: subscripting. Returns a reference to the appropriate element
    int size() const {return sz;}
};