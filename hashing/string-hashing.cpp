#include<iostream>
using namespace std;

int main(){

    string s = "abcdesgazsae";
    char c = 'z';
    int hash[26] = {0};

    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    cout << "Occurences of a: " << hash[c - 'a'] << endl;

    return 0;
}