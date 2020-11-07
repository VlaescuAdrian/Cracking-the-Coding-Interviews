#include <iostream>
#include <string>

using namespace std;


int main () {

    string unique_string = "Mr John Smith    ";
    int max_size = 13;
    int index = 0;
    for (int i = 0 ; i < unique_string.size() ; i++) {
        if (index == max_size)
            break;
        if (unique_string[i] == ' ') {
            for (int j = unique_string.size() ; j >= i + 3 ; j--) {
                unique_string[j] = unique_string[j - 2];
            }
            unique_string[i]='%';
            unique_string[i+1]='2';
            unique_string[i+2]='0';

        }
        index++;
    }

    cout<<unique_string<<endl;

   return 0;
}