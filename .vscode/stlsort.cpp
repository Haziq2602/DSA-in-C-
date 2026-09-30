#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int ,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    else return false;
}

int main(){

    int arr[5] = {1,5,4,3,2};
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
    sort(arr+2, arr+5);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

    int max_num = *max_element(arr, arr+5);
    cout << "Greatest Element in the Array: " << max_num << endl;

    pair<int, int> parr[] = {{1, 4}, {2, 2}, {3, 4}};
    for(int i=0; i<3; i++){
        cout << parr[i].first << " " << parr[i].second << " ";
    }
    cout << "\n";

    sort(parr, parr+3, comp);
    for(int i=0; i<3; i++){
        cout << parr[i].first << " " << parr[i].second << " ";
    }
    cout << "\n";

    string name = "Haziq";
    int count = 0;
    cout << "Without sorting, only the next permutations (not all permutations)" << endl;
    do{
        cout << "Permutation: " << count << " " << name << endl;
        count++;
    }
    while(next_permutation(name.begin(), name.end()));

    sort(name.begin(), name.end());
    count = 0;
    cout << "\nAll permutations by sorting the String" << endl;
    do{
        cout << "Permutation: " << count << " " << name << endl;
        count++;
    }
    while(next_permutation(name.begin(), name.end()));
    cout << "\n";



    return 0;
}