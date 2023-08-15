// reads a name and age from terminal and prints to the screen
#include "std_lib_facilities.h"

int main(){

    cout << "please, write your name and age \n";

    string name;
    float age;
    int age_months;

    cin >> name >> age;
    age_months = age * 12;

    cout << "hello, " << name << " (age " << age << " years = " << age_months << " months) \n";


}