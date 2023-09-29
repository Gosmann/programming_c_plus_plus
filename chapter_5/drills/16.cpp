// chapter 5 drill 16
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        //if (true) then cout << "Success!\n"; else cout << "Fail!\n";
        #define then         
        if (true) then cout << "Success!\n"; else cout << "Fail!\n";
        
        return 0;
    }

    catch ( exception& e ){
        cerr << "error: " << e.what() << " \n";
        return 1;
    }

    catch ( ... ){
        cerr << "Oops : unkown exception! \n" ;
        return 2;
    }
}