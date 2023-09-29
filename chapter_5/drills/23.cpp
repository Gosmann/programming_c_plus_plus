// chapter 5 drill 23
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        //int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
        int i=0, j=9; while (i<10) ++i; if (j<i) cout << "Success!\n";
        

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