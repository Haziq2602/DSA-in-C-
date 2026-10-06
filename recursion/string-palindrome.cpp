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
    
    string word;
    cin >> word;
    bool result = palindromeOrNot(word, 0, word.length());
    if(result == 1){
        cout << word << " is a palindrome.";
    }
    else cout << word << " is not a palindrome.";

    // cout << word.length();


    
    return 0;
}