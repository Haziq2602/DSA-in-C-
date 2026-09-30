#include<iostream>
using namespace std;

int print1(int n){
    if(n == 0){
        return 1;
    }
    else{
        cout << n << " ";
        n--;
        print1(n);
    }
}

int main(){

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    print1(n);

    return 0;
    
}