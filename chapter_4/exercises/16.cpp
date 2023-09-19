// chapter 4 exercise 1

#include "std_lib_facilities.h"

int find_index( vector<int> nums, int target){

    int i, index;

    for(i = 0 ; i < nums.size() ; i++){
        if( nums[i] == target ){
            index = i;
            return index;
        }
    }
    index = -1 ;    // target not been found

    return index;

}

void print_vector( vector<int> vect ){
    char buffer[100] ;
    int i;

    for( i = 0 ; i < vect.size() ; i++ ){
        sprintf(buffer, "[%3d] ", vect[i]);
        cout << buffer ;
    }
    cout << " \n";
}

int main(){

    int i, input;

    vector<int> indexes ;
    vector<int> frequencies ;

    int mode ; 

    while( cin >> input ){
        int index = find_index( indexes, input ) ;
        //cout << index << "\n";

        if( index == -1 ){   // if num does not exist
            indexes.push_back( input ) ;
            frequencies.push_back( 1 ) ;
        }
        else{
            frequencies[index] += 1;
        }

        // finds the mode
        mode = 0; // mode starts at index 0
        for( i = 0 ; i < frequencies.size() ; i++ ){
            if( frequencies[i] > mode ){
                mode = frequencies[i];
            }
        }

        int mode_num = indexes[find_index(frequencies, mode)];

        
        cout << "nums  : "; print_vector( indexes );
        cout << "freqs : "; print_vector( frequencies );

        cout << "mode  : " << mode_num << " \n";

    }


    return 0;
}

