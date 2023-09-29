// chapter 5 drill 12
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        //string s = "ape"; if (s+"fool") cout < "Success!\n";
        string s = "ape"; if (s+"fool" > "a") cout << "Success!\n";
        
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