// chapter 5 drill 5
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        //string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";

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