// chapter 5 drill 7
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        bool cond = true ;
        if (cond) cout << "Success!\n"; else cout << "Fail!\n";

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