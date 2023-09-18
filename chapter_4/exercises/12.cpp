#include "std_lib_facilities.h"

#define MAX_CHECK 1e5

int check_prime(int num){
    int i; 
    int result = 1;
    // encoding
    // 1 -> is prime
    // 0 -> is not prime
    
    if( num > 1 ){

        for( i = 2 ; i < num ; i++ ){
            if( ( num % i ) == 0 ){
                result = 0;
                break;
            }
        }

    }
    else{
        result = 0;
    }

    
    return result;
}

int main(){

    int i;
    int max;
    vector<int> primes;

    cout << "Enter max search number : ";
    cin >> max;
    for(i = 0 ; i < max ; i++){

        int result = check_prime(i) ;

        cout << i << "  " ;

        if(result == 1){
            primes.push_back(i) ;
            cout << "is prime \n" ;
        }
        else{
            cout << "is not prime \n" ;
        }

    }

    
    for( i = 0 ; i < primes.size() ; i++ ){
        cout << "primes[" << i << "] = " << primes[ i ] << " \n";
    }

}

