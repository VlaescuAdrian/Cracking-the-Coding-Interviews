#include <iostream>
#include <string>
#include <cmath> 

using namespace std;



bool isPermutation(string first, string second) {

    signed int diff = first.size() - second.size();

    if (abs(diff) > 1) {
        return false;
    }

    if (first.compare(second) == 0)
        return true;


    /*
        Delete a character
    */
   if (diff == 1) {
       int index = 0, ok = 0;
       for (int i = 0 ; i < first.size() ; i++) {
           if (first[i] != second[index] && ok == 0) {
               ok = 1;
               continue;
           }
           if (first[i] != second[index] && ok == 1) {
               return false;
           }
           index++;
       }
       return true;

   }

   if (diff == 0) {
       int index = 0, ok = 0;
       for (int i = 0 ; i < first.size() ; i++) {
           if (first[i] != second[i] && ok == 0) {
               ok = 1;
               continue;
           }
           if (first[i] != second[i] && ok == 1) {
               return false;
           }
       }
       return true;

   }

   if (diff == -1) {
       int index = 0, ok = 0;
       for (int i = 0 ; i < first.size() ; i++) {
           if (first[i] != second[index] && ok == 0) {
               index++;
               i--;
               ok = 1;
               continue;
           }
           if (first[i] != second[index] && ok == 1) {
               return false;
           }
           index++;
       }
       return true;

   }
    return true;

}


int main () {

    string first = "pale";
    string second = "pale";

    (isPermutation(first,second) == true) ? (cout<<"It's good modification"<<endl) : (cout<<"It's not good modification"<<endl);

   return 0;
}