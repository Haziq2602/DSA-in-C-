#include<iostream>
#include<array>
using namespace std;

int main(){

    int num;

    int arr[8] = {2,2,3,3,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int hash[n] = {0,0,0,0,0,0};

    cout << "Enter number to find occurences: ";
    cin >> num;

    for(int i=0; i<5; i++){
        hash[arr[i]]++;
    }

    cout << "Occurences of " << num << " : " << hash[num] << endl;

    return 0;

}