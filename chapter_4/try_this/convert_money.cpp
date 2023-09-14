// converts yen ('y'), kroner ('k') and pound ('p') into dollars

#include "std_lib_facilities.h"

int main(){

    constexpr double yen_to_dollar = 0.0069 ;
    constexpr double kroner_to_dollar = 0.095 ;
    constexpr double pound_to_dollar = 1.27 ;

    double value;
    char currency;

    cout << "please, insert the amount of money followed by the currency ('y', 'k', 'p') : " ;
    cin >> value >> currency ;

    if( currency == 'y' || currency == 'Y' ){
        cout <<  "$" << value * yen_to_dollar << " \n";
    }
    else if( currency == 'k' || currency == 'K' ){
        cout <<  "$" << value * kroner_to_dollar << " \n";
    }
    else if( currency == 'p' || currency == 'P' ){
        cout <<  "$" << value * pound_to_dollar << " \n";
    }   
    else{
        cout << "unrecognized currency \n";
    }

    return 0;

}