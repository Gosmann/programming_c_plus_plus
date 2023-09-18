// chapter 4 exercise 14
// Sieve of Eratosthenes

#include "std_lib_facilities.h"

int main(){

    int max_num;

    cout << "Insert max number to check for primes : ";
    cin >> max_num;

    // this holds the values that have been tested
    vector<char> nums ( max_num ) ;       // ?    -> possible prime
                                            // P   -> not a prime
                                            // N    -> a prime 

    vector<int> primes ;
    
    // check if nums is all empty
    for(int i = 0 ; i < max_num ; i++){
        nums[i] = '?' ; 
        //cout << nums[i] << " " ; 
    }    
    //cout << "\n";

    int i, j;
    for( i = 2 ; i < max_num ; i++ ){

        //for(int i = 0 ; i < max_num ; i++) cout << nums[i] << " "; cout << "\n";

        if( nums[i] == '?' ){
            nums[i] = 'P' ;
            primes.push_back(i);

            j = 2;
            while( i * j < max_num ){
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

