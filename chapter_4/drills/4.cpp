// chapter 4 drill 4
#include "std_lib_facilities.h"

int main(){

    double val1 , val2 ;

    while( cin >> val1 >> val2 ){   
        cout << val1 << " " << val2 << "\n" ;        

        const double threshold = (1.0/100) ;

        if( abs( val1 - val2 ) < threshold ){
            cout << "they are almost the same size \n";
        }
        else if( val1 > val2 ){
            cout << "the smaller value is: " << val2 << "\n";
            cout << "the larger value is: " << val1 << "\n";
        }
        else if( val2 > val1 ){
            cout << "the smaller value is: " << val1 << "\n";
            cout << "the larger value is: " << val2 << "\n";
        }   
        else{
            cout << "they are the same size \n";
        }
    }

    cout << "\n";

    return 0;
}