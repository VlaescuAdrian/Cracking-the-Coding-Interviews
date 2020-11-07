#include <iostream>
#include <string>
#include <unordered_map> 

using namespace std;

int main () {

    string palindrome = "tact coa";
    unordered_map<char, int> umap;

    int spaces = 0;
    for (char c : palindrome) {
        if (c == ' ') {
            spaces++;
            continue;
        }
        umap[c]++;
    }

    int not_anymore = 0;

    if ((palindrome.size() - spaces) % 2) {
        for (auto x : umap) {
            if (x.second % 2 == 1 && not_anymore == 1) {
                cout<<"Not palindrome"<<endl;
                return 0;
            }
            if (x.second % 2) {
                not_anymore = 1;
            }
        }
        cout<<"It is palindrome"<<endl;
    }
    else
    {
        for (auto x : umap) {
            if (x.second % 2) {
                cout<<"Not palindrome"<<endl;
                return 0;
            }
        }
        cout<<"It is palindrome"<<endl;
    }
    

   return 0;
}