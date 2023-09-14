// chapter 4 exercise 5
#include "std_lib_facilities.h"

int main(){

    double num1, num2, res;
    char operation;

    cout << "Enter 2 numbers and an operation (+, -, *, /): " ;
    cin >> num1 >> num2 >> operation ;

    switch( operation ){
        case '+':
            res = num1 + num2 ;
            cout <<"The sum of " ;
            break;
        case '-':
            res = num1 - num2 ;
            cout <<"The subtraction of " ;
            break;
        case '*':
            res = num1 * num2 ;
            cout <<"The multiplication of " ;
            break;
        case '/':
            res = num1 / num2 ;
            cout <<"The division of " ;
            break;
        default:   
            cout << "Error running operation ";
    }

    cout << num1 << " and " << num2 << " is " << res << " \n";

    
}