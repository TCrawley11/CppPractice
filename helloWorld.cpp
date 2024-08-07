#include <iostream>

using namespace std;

double square(double x){
    return x * x;
}

void print_square(double x){
    cout << "The square of " << x << " is "<< square(x) << "\n";
    cout << "The size of the var is " << sizeof(x) << " bits" << "\n";
}

void print_nums(){
    int v[] = {0,2,4,6,8,10};

    for (auto x : v){ // looping with fange-for statement, copies elements from vector, doesn't change them
        cout << "I looped x2x2x2 " << x << "times" << "\n";
    }

    for (auto& x : v){ // suffix &, this will modify the original vector, avoids copying by "referencing"
        ++x;
        cout << " " << x << " times" << "\n";
    }

    for (auto i = 0; i != 10; ++i){ //regular for-statement
        cout << i << "\n"; 
    }

}

int main(){
    print_square(11.26678);
    print_nums();
    return 0;
}