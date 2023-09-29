// -16.5 -23.2 -24.0 -25.7 -26.1 -18.6 -9.7 -2.4 7.5 12.6 23.8 25.3 28.0 34.8 36.7 41.5 40.3 42.6 39.7 35.4 12.6 6.5 -3.7 -14.3

#include "std_lib_facilities.h"

int main(){

    vector<double> temps ;      // temperatures

    for(double temp ; cin >> temp ; ){
        temps.push_back(temp);
    }

    double sum = 0;
    double high_temp = 0;
    double low_temp = 0;

    for( double x : temps){
        if( x > high_temp ) high_temp = x;  // find high
        if( x < low_temp) low_temp = x ;    // find low
        sum += x;
    }
    
    double average_temp = sum/temps.size() ;     // calculates the average

    cout << "High temperature : " << high_temp << " \n";
    cout << "Low temperature : " << low_temp << " \n";
    cout << "Average temperature : " << average_temp << " \n";

    return 0;
}