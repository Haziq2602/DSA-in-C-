#include<bits/stdc++.h>
using namespace std;

int factwfunc(int n){
    if(n==0){
        return 1;//we use return 1 instead of return 0 because if we return 0 then the factorial of any number will be 0 and it is not correct.
    }
    else{
        return n * factwfunc(n-1);
    }
}

int main(){
    
    int n = 0;
    cin >> n;
    cout << factwfunc(n) << endl;

    return 0;
}