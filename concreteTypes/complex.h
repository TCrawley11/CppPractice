
class complex 
{
    double re, im; // representation, how it's seen in memory; two doubles
public:
    complex(double r, double i) : re{r}, im{i} {} 
    complex(double r) : re{r}, im{0} {} 
    complex() :re{0}, im{0} {} 

    double real() const {return re;}
    void real(double r) {re = r;}

    double imag() const {return im;}
    void imag(double i) {im = i;}

    complex& operator+=(complex z) {re+=z.re, im+=z.im; return *this;}
    complex& operator-=(complex z) {re-=z.re, im-=z.im; return *this;}
    // these can be defined outside of the class because they do not require the representation of complex, they don't need the "*this"
    complex& operator*=(complex); // defined out of class somehwere
    complex& operator/=(complex); // defined out of class somewhere
};

bool operator==(complex a, complex b)
{
    return a.real() == b.real() && a.imag() == b.imag();
}

bool operator!=(complex a, complex b)
{
    return !(a==b);
}

complex operator+(complex a, complex b) { return a+=b; }
complex operator-(complex a, complex b) { return a-=b; }
complex operator-(complex a) { return {-a.real(), -a.imag()}; } // unar y minus
complex operator*(complex a, complex b) { return a*=b; }
complex operator/(complex a, complex b) { return a/=b; } 
