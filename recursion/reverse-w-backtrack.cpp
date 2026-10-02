#include<bits/stdc++.h>
using namespace std;

void reversePrint(int count, int n){
    if(count > n){
        return;
    }
    else{
        reversePrint(count+1, n);
        cout << count << " ";
    }
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    reversePrint(1, n);

    return 0;
}