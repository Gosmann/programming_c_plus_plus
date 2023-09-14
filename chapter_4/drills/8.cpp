// chapter 4 drill 8
#include "std_lib_facilities.h"

double conv_to_meter(double value, string unit){
    
    double result;

    if(unit == "cm"){
        result = value / 100.0 ; 
    }
    else if(unit == "m"){
        result = value;
    }
    else if(unit == "in"){
        result = value * 2.54 ;     // value in cm
        result /= 100.0 ;           // value in m
    }
    else if(unit == "ft"){
        result = value / 12.0 ;     // value in in
        result = value * 2.54 ;     // value in cm
        result /= 100.0 ;           // value in m
    }
    else{
        cout << "unknown unit";
    }

    return result;
}

int main(){

    double val1 , smallest, largest, sum = 0 ;
    double val_meter;

    string unit ;
    int i  = 0;
    
    while( cin >> val1 >> unit ){   

        // treat unit
        val_meter = conv_to_meter(val1, unit);    

        if(unit != "cm" && unit != "m" && unit != "in" && unit != "ft"){
            break;
        }
        
        cout << val1 << " " << unit << " = " << val_meter << " m ";

        if ( val_meter > largest || i == 0 ){
            largest = val_meter ;
            cout << "the largest so far " ;
        }
        if( val_meter < smallest || i == 0 ){
            smallest = val_meter ;
            cout << "the smallest so far " ;
        }
        sum += val_meter ;

        cout << "smallest: " << smallest << "m \n" ;
        cout << "largest: " << largest << "m \n" ;
        cout << "number of values: " << i << " \n" ;
        cout << "sum of values: " << sum << " \n" ;

        cout << "\n"; 
        i++;
    }

    cout << "\n";

    return 0;
}