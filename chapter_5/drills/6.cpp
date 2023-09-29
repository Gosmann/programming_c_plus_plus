// chapter 5 drill 6
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        //vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
        vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";

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