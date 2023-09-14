// chapter 4 exercise 3
#include "std_lib_facilities.h"


int main(){
    
    vector<double> seq (0) ;
    double sum, smallest, largest, mean;

    // reads doubles into a vector
    for( double x ; cin >> x ; ){
        seq.push_back(x);
    }

    if(seq.size() <= 0){
        return -1;
    }

    // initialize values
    smallest = seq[0];
    largest = seq[0];
    sum = 0;
    for( double x : seq ){
        sum += x;
        if( x > largest ){
            largest = x;
        }
        else if( x < smallest ){
            smallest = x;
        }
    }
    mean = sum / (double)seq.size() ;

    cout << "smallest : " << smallest << " \n";
    cout << "largest : " << largest << " \n";
    cout << "sum : " << sum << "\n";
    cout << "mean : " << mean << "\n";
    
    
    return 0;
}