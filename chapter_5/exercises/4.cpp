// chapter 5 exercise 4
#include "std_lib_facilities.h"

double ctok(double c){
    double k = c + 273.15 ;

    if(k < 0){
        error("impossible temperature! \n");    // prints out error
    }
    
    return k;
}

int main(){

    double c = 0;               // declare input variable

    cin >> c ;
    
    double k = ctok(c);         // convert temperature
    
    cout << k << '\n' ;         // print out temperature
    

    return 0;
}