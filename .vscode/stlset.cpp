#include<bits/stdc++.h>
using namespace std;

int main(){

    string set_info = "A Set stores data in a sorted and unique(no duplicates) manner";
    string set_info1 = "Every operation on set happens in the Time Complexity of log(n)";
    cout << set_info << endl;
    cout << set_info1 << endl;

    set<int> s1;
    s1.insert(1);
    s1.insert(4);
    s1.emplace(3);
    s1.emplace(2);
    auto it = s1.find(4);
    auto it2 = s1.find(5);
    cout << *(it) << endl;
    cout << *(it2) << endl;

    auto lb = s1.find(3);
    cout << *(lb) << endl;

    return 0;

}