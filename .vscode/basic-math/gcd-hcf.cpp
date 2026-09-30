#include<bits/stdc++.h>
using namespace std;

int main(){

    //using lists because they're mutable
    // list<int> lOfA;
    // list<int> lOfB;
    // list<int> lOfCD;
    // int a,b, posA, posB, GCD = 0;
    // cin >> a >> b;

    // if(a > b){
    //     int n = a;
    // }
    
    // int n = b;

    // for(int i=1; i<=n; i++){
    //     if(a%i==0){
    //         lOfA.push_back(i);
    //         posA++;
    //     }

    //     if(b%i==0){
    //         lOfB.push_back(i);
    //         posB++;
    //     }
    // }

    // for(auto i : lOfA){
    //     for(auto j : lOfB){
    //         if(i == j){
    //             lOfCD.push_back(i);
    //         }
    //     }
    // // }

    // for(auto i: lOfCD){
    //     for(auto j : lOfCD){
    //         if(j+1 > i){
    //             GCD = j;
    //         }
    //     }
    // }

    // cout << GCD;

    //striver's help 1

    list<int> lOfGCD;
    int a, b, n;
    cin >> a >> b;

    if(a > b){
        n = b;
    }
    else n = a;

    //big O(min(n1, n2))
    // for(int i=1; i<=n; i++){
    //     if(a%i==0 && b%i==0){
    //         lOfGCD.push_back(i);
    //     }
    // }

    for(int i = n; i >= 1; i--){
        if(a%i==0 && b%i==0){
            cout << "GCD/HCF: " << i;
            break;
        }
    }

    return 0;
}