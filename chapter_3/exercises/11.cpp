// chapter 3 exercise 11
#include "std_lib_facilities.h"

int main(){

    int pennies, nickels, dimes, quarters, halfs, dollars;
    int total;
    double total_dollar;

    cout << "How many pennies (1-cent coin) do you have? ";
    cin >> pennies;

    cout << "How many nickels (5-cent coin) do you have? ";
    cin >> nickels;
    
    cout << "How many dimes (10-cent coin) do you have? ";
    cin >> dimes;

    cout << "How many quarters (25-cent coin) do you have? ";
    cin >> quarters;

    cout << "How many halfs (50-cent coin) do you have? ";
    cin >> halfs;

    cout << "How many dollars (100-cent coin) do you have? ";
    cin >> dollars;

    if( pennies > 0){
        if( pennies >= 2 ){
            cout << "You have " << pennies << " pennies. \n";
        }
        else{
            cout << "You have " << pennies << " penny. \n";
        }
    }

    if( nickels > 0){
        if( nickels >= 2 ){
            cout << "You have " << nickels << " nickels. \n";
        }
        else{
            cout << "You have " << nickels << " nickel. \n";
        }
    }
    
    if( dimes > 0){
        if( dimes >= 2 ){
            cout << "You have " << dimes << " dimes. \n";
        }
        else{
            cout << "You have " << dimes << " dime. \n";
        }
    }

    if( quarters > 0){
        if( quarters >= 2 ){
            cout << "You have " << quarters << " quarters. \n";
        }
        else{
            cout << "You have " << quarters << " quarter. \n";
        }
    }

    if( halfs > 0){
        if( halfs >= 2 ){
            cout << "You have " << halfs << " halfs. \n";
        }
        else{
            cout << "You have " << halfs << " half. \n";
        }
    }

    if( dollars > 0){
        if( dollars >= 2 ){
            cout << "You have " << dollars << " dollars. \n";
        }
        else{
            cout << "You have " << dollars << " dollar. \n";
        }
    }

    total = pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25 + halfs * 50 + dollars * 100;
    total_dollar = total/100.0;

    cout << "The value of all your coins is $" << total_dollar << " \n";
    
    
    return 0;
}