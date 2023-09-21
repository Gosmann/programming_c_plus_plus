// chapter 4 exercise 18

#include "std_lib_facilities.h"


int check_is_unique( vector<string> names ){

    int unique = 1;     // initially considers uniqueness
    int i, j;

    for( i = 0 ; i < names.size() ; i++ ){  // considers one name at a time;
        for( j = i + 1 ; j < names.size() ; j++ ){
            if( names[i] == names[j] ){
                unique = 0;
                return unique;
            }
        }
    }

    return unique;
}


int main(){

    vector<string> names ; 
    vector<int> scores ;
    
    cout << "Enter names and values : ";
    
    string temp_name;
    int temp_score;
    
    cin >> temp_name >> temp_score;

    while( temp_name != "NoName" || temp_score != 0 ){
        
        names.push_back( temp_name ) ;
        scores.push_back( temp_score ) ;

        cout << "Enter names and values : ";
        cin >> temp_name >> temp_score;
    }

    int unique = check_is_unique( names );
    if( unique == 0 ){
        cout << "ERROR Repeated names \n";
    }

    int i;
    for( i = 0 ; i < names.size() ; i++ ){
        cout << "name : " << names[i] << "\t score : " << scores[i] << " \n";
    }
    

    return 0;
}

