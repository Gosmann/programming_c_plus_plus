// chapter 5 exercise 5
#include "std_lib_facilities.h"

double ktoc(double k){
    if( k < 0 ) error("impossible temperature! - temp < 0K \n");    // prints out error
    
    double c = k - 273.15 ;

    return c;
}

double ctok(double c){
    double k = c + 273.15 ;

    if(k < 0) error("impossible temperature! - temp < 0K \n");    // prints out error
    
    return k;
}

int main(){

    double in = 0;               // declare input variable

    cin >> in ;
    
    double c = ktoc(in);        // convert temperature
    
    cout << c << '\n' ;         // print out temperature
    

    return 0;
}