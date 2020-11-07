#include <iostream>
#include <string>
#include <unordered_map> 
#include <sstream>

using namespace std;


string make_compress(string compress) {

    string compressed_string = "";
    int count = 1;
    for (int i = 0 ; i < compress.size() - 1 ; i++) {
        if (compress[i] == compress[i+1]) {
            count++;
        }
        else
        {
            ostringstream temp;
            temp << count;
            compressed_string += compress[i] + temp.str();
            count = 1;
        }
        
    }
    ostringstream temp;
    temp << count;
    compressed_string += compress[compress.size() - 1] + temp.str();
    return compressed_string;
    
}

int main () {

    string compress = "aabcccccaaa";


    cout<<make_compress(compress)<<endl;


   return 0;
}