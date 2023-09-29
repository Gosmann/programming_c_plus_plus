// chapter 5 drill 22
#include "std_lib_facilities.h"

int main(){

    try {
        // < your code here >
        //string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
        string s = "Success!\n"; for (int i=0; i<=s.size(); ++i) cout << s[i];

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