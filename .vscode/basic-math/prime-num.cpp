#include<bits/stdc++.h>
using namespace std;

int main(){

    int num, count = 0;
    cin >> num;
    int dup = num;

    for(int i=1; i<=num; i++){
        if(num%i==0){
            count++;
        }
    }

    if(count == 2){
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

    return 0;
}