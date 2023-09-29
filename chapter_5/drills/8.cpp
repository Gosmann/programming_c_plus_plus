// chapter 5 drill 8
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
       //bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
       bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";


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