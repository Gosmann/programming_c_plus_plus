// chapter 3 exercise 8
#include "std_lib_facilities.h"

int main(){

    int num;

    cout << "write an interger to determine if it is odd or even : ";
    cin >> num;

    if( num % 2 == 0 ){     // it is even
        cout << num << " is even. \n";
    }   
    else{                   // it is odd
        cout << num << " is odd. \n";
    }

    return 0;
}