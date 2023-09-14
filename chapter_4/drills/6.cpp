// chapter 4 drill 4
#include "std_lib_facilities.h"

int main(){

    double val1 , smallest, largest ;
    int i  = 0;
    
    while( cin >> val1 ){   
        cout << val1 << " ";

        if ( val1 > largest || i == 0 ){
            largest = val1;
            cout << "the largest so far " ;
        }
        if( val1 < smallest || i == 0 ){
            smallest = val1;
            cout << "the smallest so far " ;
        }
        
        cout << "\n"; 
        i++;
    }

    cout << "\n";

    return 0;
}