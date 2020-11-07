#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main () {

    string s1 = "waterbottle";
    string s2 = "erbottlewat";


    string double_s1 = s1 + s1;


    if(strstr(double_s1.c_str(),s2.c_str()))
    {
        cout <<"S1 Contains S2";
    }
    else
    {
        cout <<"S1 not Contains S2";
    }
    

   return 0;
}