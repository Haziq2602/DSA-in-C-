#include<bits/stdc++.h>
using namespace std;

//using two variables
int sumofN(int n, int sum){
    if(n == 0){
        return sum;
    }
    else{
        sum = sum + n;
        sumofN(n-1, sum);
    }
}

int sumOfN(int count, int n, int sum){//using three variables
    if(count == n){
        return sum;
    }
    else{
        sum = sum + n;
        sumOfN(count+1, n, sum);
    }
}

int main(){
    int n = 3;
    int sum = 0;
    int count = 1;

    sum = sumOfN(count, n, sum);
    cout << sum << endl;

    return 0;

}