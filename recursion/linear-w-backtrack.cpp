#include<iostream>
using namespace std;

void printLinear(int n, int count){
    if(count == 0){
        return;
    }
    else{
        printLinear(n, count-1);
        cout << count << " ";
    }
}

int main(){

    int n;
    cin >> n;
    printLinear(n, n);

    return 0;

}