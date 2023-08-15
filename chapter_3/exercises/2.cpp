// chapter 3 exercise 2
// converts from miles to kilometers

#include "std_lib_facilities.h"

int main(){
    double miles, kilometers;
    
    cout << "miles : " ;
    cin >> miles ;
    
    kilometers = miles * 1.609 ;
    
    cout << "kilometers : " << kilometers << " \n";
}