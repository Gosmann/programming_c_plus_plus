#include "std_lib_facilities.h"

int area(int length, int width){
    return length * width;
}

int main(){

    /*
    int s1 = area(7;        // error: ) missing
    int s2 = area(7)        // error: ; missing
    Int s3 = area(7);       // error: Int is not a type
    int s4 = area('7);      // error: non-terminated character (' missing)
    */

    
    int s1 = area(7, 7);
    int s2 = area(7, 7);
    int s3 = area(7, 7);
    int s4 = area(7, 7);

    int x4 = area(10, -7);
    int x5 = area(10.7, 9.3);
    char x6 = area(100, 9999);
    
    return 0;
}