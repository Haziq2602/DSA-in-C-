#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    while(a > 0 & b > 0){
        if(a > b){
            a = a%b;
        } else b = b%a;
    }

    if(a == 0){
        cout << "GCD/HCF: " << b;
    } else cout << "GCD/HCF: " << a;

    //Whenever there's modulo operations happening.
    string tc = "Time Complexity = logvfive(min(a, b))";
    cout << "\n" << tc;

    return 0;
}