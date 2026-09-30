#include<bits/stdc++.h>
using namespace std;

int main(){

    multimap<int, int> map1;
    map1.insert({0, 5});
    map1.insert({0, 6});
    map1.emplace(1, 5);
    map1.emplace(1, 6);

    auto it = map1.find(1);
    cout << (*it).first << " " << (*it).second << endl;

    for(auto it : map1){
        cout << it.first <<  " " << it.second << endl;
    }

    return 0;

}