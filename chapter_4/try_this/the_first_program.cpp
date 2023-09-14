// chapter 4 try this
#include "std_lib_facilities.h"

int square(int input){
    int i, res = 0;;

    for(i = 0; i < input; i++){
        res += input;
    }

    return res;
}

int main(){

    int i;

    for(i = 0; i < 100 ; i++){
        cout << i << "\t" << square(i) << "\n";
    }

}