// chapter 5 drill 24
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        int x = 4; double d = 2*x+0.5; if (d==2*x+0.5) cout << "Success!\n";
        

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