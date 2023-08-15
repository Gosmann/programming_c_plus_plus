// simple program to exercise operators
#include "std_lib_facilities.h"

int main(){

    cout << "Please enter a floating-point value: ";
    int n;
    cin >> n;
    
    float temp = n;

    cout << "n == " << n << "\n"
         << "n+1 == " << n+1 << "\n"
         << "3*n == " << 3*n << "\n"
         << "n+n == " << n+n << "\n"
         << "n^2 == " << n*n << "\n"
         << "n/2 == " << n/2 << "\n"
         << "n%2 == " << n%2 << "\n"
         << "sqrt(n) == " << sqrt(temp) << "\n" ;  


}