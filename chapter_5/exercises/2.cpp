// chapter 5 exercise 2
#include "std_lib_facilities.h"

double ctok(double c){
    // int k = c + 273.15 ; 
    double k = c + 273.15 ;

    //return int    
    return k;
}

int main(){

    double c = 0;               // declare input variable
    
    //cin >> d;                 // retrieve temperature to input variable
    cin >> c ;
    
    //double k = ctok("c");     // convert temperature
    double k = ctok(c);         // convert temperature
    
    //Cout << k << '/n' ;       // print out temperature
    cout << k << '\n' ;         // print out temperature

    return 0;
}