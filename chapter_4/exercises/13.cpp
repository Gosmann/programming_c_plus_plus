// chapter 4 exercise 13
// Sieve of Eratosthenes

#include "std_lib_facilities.h"

#define MAX_CHECK 100

int main(){

    // this holds the values that have been tested
    vector<char> nums ( MAX_CHECK ) ;       // ?    -> possible prime
                                            // P   -> not a prime
                                            // N    -> a prime 

    vector<int> primes ;
    
    // check if nums is all empty
    for(int i = 0 ; i < MAX_CHECK ; i++){
        nums[i] = '?' ; 
        //cout << nums[i] << " " ; 
    }    
    //cout << "\n";

    int i, j;
    for( i = 2 ; i < MAX_CHECK ; i++ ){

        //for(int i = 0 ; i < MAX_CHECK ; i++) cout << nums[i] << " "; cout << "\n";

        if( nums[i] == '?' ){
            nums[i] = 'P' ;
            primes.push_back(i);

            j = 2;
            while( i * j < MAX_CHECK ){
                nums[ i * j ] = 'N';         // not a prime
                j++;
            }

        }



    }    

    //cout << "Final \n" ;
    for(int i = 0 ; i < primes.size() ; i++){
        // cout << nums[i] << " ";
        cout << "primes[" << i << "] = " << primes[i] << " \n";
    }

    return 0;
}

