// chapter 4 exercise 4
#include "std_lib_facilities.h"

int main(){

    const int lim_inf = 1;
    const int lim_sup = 100;

    int mov_inf = lim_inf;
    int mov_sup = lim_sup;

    cout << "think of a number from " << lim_inf << " to " << lim_sup << " \n" ;
    char ans;

    int mid = (mov_inf + mov_sup) / 2 ; 
    int range = mov_sup - mov_inf + 1;
    
    
    while( range > 1 ){

        //cout << mov_inf << " : " << mov_sup << " range : " << range << " \n";
        cout << "is the number you are thinking of less than " << mid << " ? (y/n) : ";

        cin >> ans ;

        if( ans == 'y' || ans == 'Y' ){
            mov_sup = mid - 1;
        }
        else if( ans == 'n' || ans == 'N' ){
            mov_inf = mid;
        }
        else{
            cout << " try again \n";
        }

        range = mov_sup - mov_inf + 1 ;
        mid = mov_inf + range / 2 ;
        
    }

    cout << "your number: " << mov_inf << " \n" ;
    
    
}