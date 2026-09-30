#include<iostream>
using namespace std;

int printN(int n, int count){
    if(count == n+1){
        return n;
    }
    else{
        cout << count << " ";
        count++;
        printN(n, count);
    }
}

int main(){

    int n, count = 1;
    cout << "Enter value of n: ";
    cin >> n;

    printN(n, count);

    return 0;
}