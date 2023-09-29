// chapter 5 drill 19
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        //vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

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