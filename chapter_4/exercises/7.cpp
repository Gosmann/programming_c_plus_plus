// chapter 4 exercise 7
#include "std_lib_facilities.h"

vector<double> treat_inputs( vector<string> input ){
    int i;
    
    vector<double> res (2) ;
    
    vector<string> nums = { "zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eigth", "nine" };


    for(i = 0 ; i < 2 ; i++){

        if( input[i].size() == 1 ){    // it is a single number
            // num -> string
            res[i] = input[i][0] - '0' ;
        }
        else{                       // it is an actual string
            // string -> num 
            int j;
            for(j = 0 ; j < nums.size() ; j++){
                if( input[i] == nums[j] ){     // the number if found        
                    res[i] = j;
                    break;
                }
            }
        }
    }
    
    return res;
}

int main(){

    vector<string> num_input (2) ;
    vector<double> num (2) ;
    double res;
    char operation;

    cout << "Enter 2 numbers and an operation (+, -, *, /): " ;

    while( cin >> num_input[0] >> num_input[1] >> operation ){

        num = treat_inputs(num_input);      // converts input from string to double

        switch( operation ){        
            case '+':
                res = num[0] + num[1] ;
                cout <<"The sum of " ;
                break;
            case '-':
                res = num[0] - num[1] ;
                cout <<"The subtraction of " ;
                break;
            case '*':
                res = num[0] * num[1] ;
                cout <<"The multiplication of " ;
                break;
            case '/':
                res = num[0] / num[1] ;
                cout <<"The division of " ;
                break;
            default:   
                cout << "Error running operation ";
        }

        cout << num[0] << " and " << num[1] << " is " << res << " \n";

    }

}