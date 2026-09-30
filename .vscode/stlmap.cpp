#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, int> map1;
    map<int, pair<int, int>> map2;

    int value1;
    cin >> value1;

    map1[0] = value1;
    map1.emplace(2, 69);
    map1.insert({1, 3000});//map stores data in sorted key manner
    
    map2[0] = {5, 6};

    for(auto it : map1){
        cout << it.first << " " << it.second << endl;
    }

    for(auto it : map2){
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }

    return 0;

}