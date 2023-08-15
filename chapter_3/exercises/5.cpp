// chapter 3 exercise 5
#include "std_lib_facilities.h"

int main(){

    double val1, val2;

    cout << "enter 2 floating-point values : ";
    cin >> val1 >> val2;

    if( val1 != val2 ){
        if( val1 < val2 ){
            cout << "smaller : " << val1 << " \n";
            cout << "bigger  : " << val2 << " \n";
        }
        else{
            cout << "smaller : " << val2 << " \n";
            cout << "bigger  : " << val1 << " \n";
        }
    }
    else{
        cout << "same size \n";        
    }

    cout << "sum : " << val1 + val2 << " \n";
    cout << "difference : " << abs( val1 - val2 ) << " \n";
    cout << "product : " << val1 * val2 << " \n";
    cout << "ratio : " << ((double)val1 / val2) << " \n";
    

    return 0;
}