// chapter 4 exercise 21
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

vector<int> look_for_scores( vector<int> scores, int search_score ){

    int i;
    vector<int> indexes;

    for(i = 0 ; i < scores.size() ; i++){
        if( scores[i] == search_score ){
            indexes.push_back(i);
        }
    }

    return indexes;
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

    int search_score;

    cout << "Enter a score to look for names : " ;
    cin >> search_score ;

    vector<int> indexes = look_for_scores( scores, search_score );    

    if( indexes.size() == 0 ){
        cout << "Score not found. \n";
    }
    else{
        for(i = 0 ; i < indexes.size() ; i++){
            cout << names[ indexes[ i ] ] << " \n" ;  
        }
    }   

    return 0;
}

