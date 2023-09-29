// chapter 5 drill 4
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        string success = "Success!" ;
        cout << success << '\n' ;
          
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