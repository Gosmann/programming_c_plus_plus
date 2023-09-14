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


    switch(currency){
        case 'y' : case 'Y':
            cout <<  "$" << value * yen_to_dollar << " \n";
            break;
        case 'k' : case 'K':
            cout <<  "$" << value * kroner_to_dollar << " \n";
            break;
        case 'p' : case 'P':
            cout <<  "$" << value * pound_to_dollar << " \n";
            break;
        default:
            cout << "unrecognized currency \n";
            break;
    }


    return 0;

}