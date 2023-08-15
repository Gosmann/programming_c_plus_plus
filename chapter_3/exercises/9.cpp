// chapter 3 exercise 9
#include "std_lib_facilities.h"

int main(){

    string number;

    cout << "enter a spelled-out number : " ;
    cin >> number ;

    if( number == "zero" ){
        cout << "0 \n";
    }
    else if(number == "one"){
        cout << "1 \n";
    }
    else if(number == "two"){
        cout << "2 \n";
    }
    else if(number == "three"){
        cout << "3 \n";
    }
    else if(number == "four"){
        cout << "4 \n";
    }
    else{
        cout << "not a number I know - stupid computer! \n";
    }

    return 0;
}