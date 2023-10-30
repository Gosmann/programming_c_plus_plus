// chapter 5 exercise 3
#include "std_lib_facilities.h"

double ctok(double c){
    // int k = c + 273.15 ; 
    double k = c + 273.15 ;

    //return int    
    return k;
}

int main(){

    double c = 0;               // declare input variable

    cin >> c ;
    
    double k = ctok(c);         // convert temperature
    
    if(k < 0){
        error("impossible temperature! \n");    // prints out error
    }
    else{
        cout << k << '\n' ;         // print out temperature
    }
    

    return 0;
}