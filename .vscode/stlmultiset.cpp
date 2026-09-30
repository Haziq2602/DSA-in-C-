#include<bits/stdc++.h>
using namespace std;

int main(){

    multiset<string> mlset1;
    mlset1.insert("Haziq");
    mlset1.insert("Haziq");
    mlset1.insert("Haziq");

    auto it = mlset1.find("Haziq");
    auto mscount = mlset1.count("Haziq");

    cout << *(it) << endl;
    cout << mscount << endl;

    mlset1.erase(mlset1.find("Haziq"));
    mscount = mlset1.count("Haziq");
    cout << mscount << endl;

    mlset1.insert(next(mlset1.begin()), "Is");
    
    cout << mlset1.count("Is") << endl;

    for(auto it : mlset1){
        cout << (it) << " ";
    }

    return 0;

}