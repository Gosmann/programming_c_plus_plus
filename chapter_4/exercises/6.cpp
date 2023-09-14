// chapter 4 exercise 6
#include "std_lib_facilities.h"

int main(){

    // int input;
    string input;

    vector<string> nums = { "zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eigth", "nine" };

    cout << "Enter a single digit : " ;

    while ( cin >> input ){
        // num -> string
        /*      
        if( input >= 0 && input <= 9 ){     // it is valid number
            cout << nums[ input ] << " : " ;
        }
        */

        // string -> num 
        int i;
        for(i = 0 ; i < 10; i++){
            if( input == nums[i] ){     // the number if found
                
                cout << i << " : " ;
                break;
            }
        }
    }

    
}