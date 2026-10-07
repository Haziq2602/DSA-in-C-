#include<iostream>
using namespace std;

int main(){

    string s = "abcdesgasae";
    char c = 'a';
    int hash[26] = {0};

    for(int i=0; i<s.size(); i++){
        hash[s[i] - c]++;
    }

    cout << "Occurences of a: " << hash[c - 'a'] << endl;

    return 0;
}