#include<bits/stdc++.h>
using namespace std;

int main(){

    int num, dup, lastDigit, rev = 0;
    cin >> num;
    dup = num;

    // bool true = 1;
    // bool false = 0;

    while(num>0){
        lastDigit = num % 10;
        num/=10;

        rev = rev * 10 + lastDigit;
    }

    // cout << rev;

    if(rev == dup){
        cout << true;
    }
    else cout << false;

    return 0;
}