// chapter 4 exercise 2
#include "std_lib_facilities.h"

int main(){
    
    double median;
    vector<int> seq (0) ;

    for( int x ; cin >> x ; ){
        seq.push_back(x);
    }

    if( seq.size() % 2 == 0 ){      // if it has even elements
        median = (seq[ seq.size() / 2 ] + seq[ seq.size() / 2 - 1 ] ) / 2.0 ;
    }
    else{
        median = (float)seq[ seq.size() / 2 ] ;
    }

    cout << "median : " << median << " \n" ;

    return 0;
}