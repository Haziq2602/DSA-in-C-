#include<iostream>
using namespace std;


//Time Complexity: O(n)
//Space Complexity: O(n)
void fiveTimes(int count, int n){
    if(count == n){
        return;
    }
    else{
        cout << "Rikazike" << endl;
        count++;
        fiveTimes(count, n);
    }
}


int main(){

    int n, count = 0;
    cin >> n;
    fiveTimes(count, n);

    return 0;
}