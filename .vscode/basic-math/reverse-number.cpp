#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, lastDigit; cin >> n;
    int revNum = 0;
    vector<int> toReverse;
    
    while(n>0){
        lastDigit = n % 10;
        // toReverse.push_back(lastDigit);
        n/=10;

        revNum = (revNum * 10) + lastDigit;
    }
    

    cout << revNum;


    // for(vector<int>::iterator it = toReverse.begin(); it!=toReverse.end(); it++){
    //     cout << *(it);
    // }

    return 0;
    
}