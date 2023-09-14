// chapter 4 try this : disliked words
#include "std_lib_facilities.h"

int main(){

    string disliked = "Broccoli";

    cout << "please, write words : ";

    for( string word ; cin >> word ; ){
        
        if(word != disliked){
            cout << word << " " ;
        }
        else{
            cout << "BLEEP ";
        }
        
    }

    return 0;
}