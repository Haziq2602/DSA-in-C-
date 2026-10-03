#include<bits/stdc++.h>
using namespace std;

//using two variables
int sumOfN(int n, int sum){
    if(n == 0){
        return sum;
    }
    else{
        sum = sum + n;
        sumOfN(n-1, sum);
    }
}

// int sumOfN(int count, int n, int sum){//using three variables
//     if(count == n+1){
//         return sum;
//     }
//     else{
//         sum = sum + count;
//         sumOfN(count+1, n, sum);
//     }
// }

int main(){
    int n, sum = 0;
    cin >> n;
    int count = 1;

    sum = sumOfN(n, sum);
    cout << sum << endl;

    return 0;

}