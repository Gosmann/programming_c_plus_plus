// chapter 4 exercise 18

#include "std_lib_facilities.h"
#include <math.h>

int main(){

    double a, b, c;

    cout << "a*x^2 + b*x + c = 0 \n" ;
    cout << "please enter a, b, and c : " ;

    cin >> a >> b >> c ;

    double x1 = (-b + sqrt( b*b -4*a*c ) )/(2*a);
    double x2 = (-b - sqrt( b*b -4*a*c ) )/(2*a);

    cout << "x1 : " << x1 << " \n";
    cout << "x2 : " << x2 << " \n";

    return 0;
}

