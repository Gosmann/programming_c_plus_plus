// chapter 5 exercise 7
#include "std_lib_facilities.h"

void quadratic_equation(double a, double b, double c){
    
    double delta = b*b - 4*a*c ;
    if(delta < 0) error("imaginary roots! - delta < 0");

    double root1  = (-b + delta)/(2 * a) ;
    double root2  = (-b - delta)/(2 * a) ;

    cout << "roo1 : " << root1 << " \n";
    cout << "roo2 : " << root2 << " \n";

}

int main(){

    //quadratic_equation( 1, -11, 30 );   // real roots
    quadratic_equation( 1, -11, 100 );   // complex roots

    return 0;
}