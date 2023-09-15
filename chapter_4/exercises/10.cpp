#include "std_lib_facilities.h"

int convert_to_int( string command ){

    int result = -1;

    if( command.size() == 1){    // it is a single number
        result = command[0] - '0';
    }
    else{                       // it is an actual string
        if( command == "Rock" ){
            result = 0;
        }
        else if( command == "Paper" ){
            result = 1;
        }
        else if( command == "Scissors" ){
            result = 2;
        }
    }

    return result;
}

string convert_to_string( int computer_command ){

    computer_command = computer_command % 3;
    string result;

    if( computer_command == 0 ){
        result = "Rock" ;
    }
    else if( computer_command == 1 ){
        result = "Paper" ; 
    }
    else if( computer_command == 2){
        result = "Scissors" ;
    }

    return result;
}

int main(){

    int input;
    string command;

    // encoding
    // 0 -> rock
    // 1 -> paper
    // 2 -> scissors
    vector<int> next = { 0,1,1,2,2,2,0,0,1,2,2,0,1,1,2,1,
                         1,0,1,0,2,2,1,1,2,1,0,2,0,1,0,0 } ;

    cout << "Please, write an interger : " ;
    cin >> input;

    input  = input % next.size() ;   // treats to index in next
    //cout << input << " \n";

    cout << "What will you play? (Rock, Paper or Scissors) : ";

    int i = input;
    while( cin >> command){

        int com_int = convert_to_int( command );        
        //cout << com_int << " \n";
        
        if( i >= next.size() ){
            i = 0;
        }
        int computer_command = next[ i ] ;
        //cout << computer_command;
        

        cout << "Computer plays " << convert_to_string( computer_command ) << " \n";

        switch( com_int ){
            case 0:     // player chose rock
                switch( computer_command ){
                    case 0:     // computer chose rock
                        cout << "It is a tie! \n";
                        break;
                    case 1:     // computer chose paper
                        cout << "Computer won! \n";
                        break;
                    case 2:     // computer chose scissors
                        cout << "Player won! \n";
                }
                break;

            case 1:     // player chose paper
                switch( computer_command ){
                    case 0:     // computer chose rock
                        cout << "Player won! \n";
                        break;
                    case 1:     // computer chose paper
                        cout << "It is a tie! \n";
                        break;
                    case 2:     // computer chose scissors
                        cout << "Computer won! \n";
                }              
                break;

            case 2:     // player chose scissors
                switch( computer_command ){
                    case 0:     // computer chose rock
                        cout << "Computer won! \n";
                        break;
                    case 1:     // computer chose paper
                        cout << "Player won! \n";
                        break;
                    case 2:     // computer chose scissors
                        cout << "It is a tie! \n";
                }
                break;

            default:
                break;
        }

        i++;
        cout << "\nWhat will you play? (Rock, Paper or Scissors) : ";
    }


}