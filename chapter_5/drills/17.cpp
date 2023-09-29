// chapter 5 drill 17
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        //int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
        int x = 2000; char c = x; if (c==(char)2000) cout << "Success!\n";
        
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