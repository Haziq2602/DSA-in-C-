#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int numCount = 0;
    // while(n>0){
    //     numCount++;
    //     n/=10;
    // }
    //Whenever the number of iterations is based on division, the time complexity of the algorithm will always be logarithmic, which is log, and then the number with which the division is taking place and n.
    //The overall time complexity would be O(log10(n)).  

    numCount = (int)(log10(n)+1);

    return numCount;
}

int main(){

    int num, numCount; cin >> num;

    numCount = count(num);
    cout << "Number of Digits: " << numCount << endl;

    return 0;

}