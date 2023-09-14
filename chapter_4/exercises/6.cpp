// chapter 4 exercise 6
#include "std_lib_facilities.h"

int main(){

    string input;

    vector<string> nums = { "zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eigth", "nine" };

    cout << "Enter a single digit : " ;

    while ( cin >> input ){
        
        if( input.size() == 1 ){    // it is a single number
            // num -> string
            cout << nums[ input[0] - '0' ] << " : " ;
        }
        else{                       // it is an actual string
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

    
}