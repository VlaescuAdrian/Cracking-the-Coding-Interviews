#include <iostream>
#include <string>

using namespace std;


int freq[128];
int main () {

    string unique_string = "isUnIque? Adrr";


    for (int i = 0 ; i < 128 ; i++) {
        freq[i] = 0;
    }

    for (char c : unique_string) {
        freq[(int)c]++;
        if (freq[(int)c] > 1) {
            cout<<"It's not unique string"<<endl;
            return 0;
        }
    }

    cout<<"It's unique string"<<endl;

   return 0;
}