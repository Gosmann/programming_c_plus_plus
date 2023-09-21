// chapter 4 exercise 20
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

int return_index( vector<string> names, string name ){

    int index = -1;     // initially considers uniqueness
    int i, j;

    for( i = 0 ; i < names.size() ; i++ ){  // considers one name at a time;
        if( names[i] == name ){
            index = i;
            return index;
        }
    }

    return index;
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
    
    string search_name;

    cout << "Enter a name to view score : ";
    cin >> search_name;

    int index = return_index(names, search_name);

    if(index == -1){
        cout << "name not found. \n" ;
    }
    else{
        cout << "Score : " << scores[index] << "\n" ;
    }


    return 0;
}

