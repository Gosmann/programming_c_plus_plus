// detects repeated words in a sequence of text
#include "std_lib_facilities.h"

int main(){

    //cout << "please, provide a sequence of text : ";
    int word_count = 0;
    string current , previous = " " ;
    
    while( cin >> current ){
        ++word_count;
        if( current == previous ){
            cout << "repeated word number " << word_count << " : " << current << "\n";
        }
        previous = current;
    }

    return 0;

}