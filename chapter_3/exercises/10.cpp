// chapter 3 exercise 10
#include "std_lib_facilities.h"

int main(){

    string operation;
    double num1, num2, result;

    cout << "write a operations followed by to operands (example: * 4 5) : ";
    cin >> operation >> num1 >> num2 ;

    if(operation == "+"){
        result = num1 + num2;
    }
    else if(operation == "-"){
        result = num1 - num2;
    }
    else if(operation == "*"){
        result = num1 * num2;
    }
    else if(operation == "/"){
        result = num1 / num2;
    }
    else{
        cout << "Error! \n";
    }

    cout << "result : " << result << " \n";

    return 0;

}