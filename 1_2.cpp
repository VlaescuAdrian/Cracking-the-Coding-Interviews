#include <iostream>
#include <string>

using namespace std;


int freq[128];

bool isPermutation(string first, string second) {

    if (first.size() != second.size()) 
        return false;

    for (char c : first) {
        freq[(int)c]++;
    }

    for (char c : second) {
        freq[(int)c]--;
    }

    for (int i = 0 ; i < 128 ; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}


int main () {

    string first = "car";
    string second = "rac";


    for (int i = 0 ; i < 128 ; i++) {
        freq[i] = 0;
    }

    cout<<isPermutation(first,second)<<endl;

   return 0;
}