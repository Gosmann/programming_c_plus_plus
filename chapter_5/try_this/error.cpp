#include "std_lib_facilities.h"

void my_error(string s1){
    throw runtime_error(s1);
}

int main(){

    my_error("testing error without a catch");

    return 0;
}