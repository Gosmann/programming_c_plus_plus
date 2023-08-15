// chapter 3 drill 4
#include "std_lib_facilities.h"

int main(){

    string first_name, friend_name ; 
    char friend_sex = 0;

    cout << "enter the first name of the person you want to write to : ";
    cin >> first_name;

    cout << "enter the first name of the friend : ";
    cin >> friend_name;

    cout << "what is the sex of friend (m -> male : f -> female) : ";
    cin >> friend_sex;

    cout << "Dear " << first_name << ", \n" ;

    cout << "\t" << "How are you? I am fine. I miss you." << "\n";

    cout << "\t" << "Have you seen " << friend_name << " lately? " << "\n";

    if( friend_sex == 'm' || friend_sex == 'M' ){
        cout << "\t" << "If you see " << friend_name << " please ask him to call me. \n";
    }
    else if( friend_sex == 'f' || friend_sex == 'F' ){
        cout << "\t" << "If you see " << friend_name << " please ask her to call me. \n";
    }
    else{
        cout << "Error \n";
    }

}