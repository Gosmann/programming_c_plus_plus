// chapter 5 drill 9
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        //string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
        string s = "ape"; bool c = "fool" > s; if (c) cout << "Success!\n";

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