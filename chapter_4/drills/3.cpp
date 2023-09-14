// chapter 4 drill 3
#include "std_lib_facilities.h"

int main(){

    int val1 , val2 ;

    while( cin >> val1 >> val2 ){   
        cout << val1 << " " << val2 << "\n" ;        
        if( val1 > val2 ){
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