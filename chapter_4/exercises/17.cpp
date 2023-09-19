// chapter 4 exercise 1

#include "std_lib_facilities.h"

int find_index( vector<string> strings, string target){

    int i, index;

    for(i = 0 ; i < strings.size() ; i++){
        if( strings[i] == target ){
            index = i;
            return index;
        }
    }
    index = -1 ;    // target not been found

    return index;
}

int find_index_int( vector<int> nums, int target){

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

void print_vector( vector<string> vect ){
    char buffer[100] ;
    int i;

    for( i = 0 ; i < vect.size() ; i++ ){
        sprintf(buffer, "[%10s] ", &vect[i][0]);
        cout << buffer ;
    }
    cout << " \n";
}

void print_vector_int( vector<int> vect ){
    char buffer[100] ;
    int i;

    for( i = 0 ; i < vect.size() ; i++ ){
        sprintf(buffer, "[%10d] ", vect[i]);
        cout << buffer ;
    }
    cout << " \n";
}

int find_mode( vector<int> vect ){
    int mode = 0; // mode starts at index 0
    for( int i = 0 ; i < vect.size() ; i++ ){
        if( vect[i] > mode ){
            mode = vect[i];
        }
    }

    return mode;
}

int find_min( vector<string> vect ){
    int min = 0; // mode starts at index 0
    for( int i = 0 ; i < vect.size() ; i++ ){
        if( vect[min] > vect[i] ){
            min = i;
        }
    }
    return min;    // return index of min
}

int find_max( vector<string> vect ){
    int max = 0; // mode starts at index 0
    for( int i = 0 ; i < vect.size() ; i++ ){
        if( vect[max] < vect[i] ){
            max = i;
        }
    }
    return max;    // return index of max
}



int main(){

    int i;
    string input;

    vector<string> indexes ;
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
        mode = find_mode( frequencies ); 

        string mode_num = indexes[find_index_int(frequencies, mode)];

        
        cout << "strg  : "; print_vector( indexes );
        cout << "freqs : "; print_vector_int( frequencies );

        cout << "min  : " << indexes[ find_min( indexes ) ] << " \n";
        cout << "max  : " << indexes[ find_max( indexes ) ] << " \n";
        

        cout << "mode  : " << mode_num << " \n";

    }


    return 0;
}

