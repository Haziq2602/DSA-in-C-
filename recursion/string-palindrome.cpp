#include<bits/stdc++.h>
using namespace std;

bool palindromeOrNot(string word, int i, int n){
    if(i >= (n/2)){
        return true;
    }
    if(word[i] != word[n-1-i]){
        return false;
    }
    return palindromeOrNot(word, i+1, n);
}

int main(){
    
    string word = "haziqq";
    bool result = palindromeOrNot(word, 0, word.length());
    cout << result;
    // cout << word.length();


    
    return 0;
}