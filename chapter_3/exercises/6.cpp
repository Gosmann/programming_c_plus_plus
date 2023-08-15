// chapter 3 exercise 6
#include "std_lib_facilities.h"

int main(){

    int val1, val2, val3;

    cout << "enter 3 intergers values : ";
    cin >> val1 >> val2 >> val3 ;
    
    int large, mid, small;
    
    if( val1 >= val2 ){
        if( val1 >= val3 ){
            large = val1;
            if( val2 >= val3 ){
                mid = val2;
                small = val3;
            }
            else{
                mid = val3;
                small = val2;
            }
        }
        else{
            large = val3;
            mid = val1;
            small = val2;
        }
    }

    else{
        if( val1 >= val3 ){
            large = val2;
            mid = val1;
            small = val3;
        }
        else{
            small = val1;

            if( val2 >= val3 ){
                large = val2;
                mid = val3;
            }
            else{
                large = val3;
                mid = val2;
            }
            
        }
    }

    cout << small << ", " << mid << ", " << large << ". \n";


    return 0;
}