// chapter 4 try this
#include "std_lib_facilities.h"

int main(){

    int i = 0;

    while( ('a' + i) <= 'z' ){
        cout << char('a' + i) << "\t" << int('a' + i) << "\n";
        ++i;
    }



}