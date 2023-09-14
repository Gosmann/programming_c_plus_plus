// chapter 4 exercise 8
#include "std_lib_facilities.h"

int main(){

    int i;
    unsigned long long int current, sum = 0;

    int k, m, g;

    for( i = 0 ; i < 64 ; i++ ){
        
        if(i != 0)
            current *= 2;
        else
            current = 1;

        sum += current ;
        
        if( sum < 1e9 ){
            g = i + 1;
        }
        if( sum < 1e6 ){
            m = i + 1;
        }
        if( sum < 1e3 ){
            k = i + 1;
        }
        
        
        
        cout << i << " " << current << " " << sum << " \n" ;
    }

    cout << "1000 : " << k << " squares \n";
    cout << "1000,000 : " << m << " squares \n";
    cout << "1000,000,000 : " << g << " squares \n";


    

}