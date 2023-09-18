// chapter 4 exercise 14
// Sieve of Eratosthenes

#include "std_lib_facilities.h"

#define STD_NUM 100

int main(){

    int max_num;

    cout << "Insert max number of primes to find : ";
    cin >> max_num;

    // this holds the values that have been tested
    vector<char> nums ( STD_NUM ) ;         // ?    -> possible prime
                                            // P    -> not a prime
                                            // N    -> a prime 

    vector<int> primes ;
    
    // check if nums is all empty
    for(int i = 0 ; i < STD_NUM ; i++){
        nums[i] = '?' ; 
        //cout << nums[i] << " " ; 
    }    
    //cout << "\n";

    int i, j;
    for( i = 2 ; primes.size() < max_num ; i++ ){

        //for(int i = 0 ; i < max_num ; i++) cout << nums[i] << " "; cout << "\n";
        if( i >= nums.size() ){
            cout << "Error! \n" ;

            // start all over again
            i = 2;

            int prev_size = nums.size();
            nums.clear();
            primes.clear();
            
            for(int k = 0 ; k < prev_size*2 ; k++ ){
                nums.push_back(k) ;
                nums[k] = '?' ;  
            }    
            
            //break;
        }
        
        if( nums[i] == '?' ){
            nums[i] = 'P' ;
            primes.push_back(i);

            j = 2;
            while( i * j < nums.size() ){
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

