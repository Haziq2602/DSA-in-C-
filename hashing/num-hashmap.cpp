#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, num, max = 0;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map<int, int> hashMap;
    // always prioritise unordered map over a map because in best and average case the TC of unordered map is O(1),
    // whereas TC of map is O(log n). Also, worst case rarely happens. but if it does then simply go with map.

    for(int i=0; i<n; i++){
        hashMap[arr[i]]++;
    }

    cin >> num;

    cout << "Occurences of " << num << ": " << " " << hashMap[num] << endl;

    cout << max;

    return 0;
}