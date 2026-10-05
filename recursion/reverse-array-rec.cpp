#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void reverseArray(int l, int r, int arr[], int n){
    if(l >= r){
        return;
    }
    else{
        swap(arr[l], arr[r]);
        reverseArray(l+1, r-1, arr, n);
    }
}

void reverseSingleEl(int i, int arr[], int n){
    if(i>=(n/2)){
        return;
    }
    else{
        swap(arr[i], arr[n-1-i]);
        reverseSingleEl(i+1, arr, n);
    }
}

int main(){

    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    reverseSingleEl(0, arr, n);

    for(auto i : arr){
        cout << i << " ";
    }

    // cout << "Original array is: ";
    // for(auto i : arr){
    //     cout << i << " ";
    // }

    // reverseArray(0, n-1, arr, n);

    // cout << "Reversed array is: ";
    // for(auto i : arr){
    //     cout << i << " ";
    // }

    return 0;
}