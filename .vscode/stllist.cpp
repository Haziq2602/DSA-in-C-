#include <bits/stdc++.h>
using namespace std;

int main(){
    
    cout << "Learning lists and its functions" << endl;
    list<string> l1;
    l1.push_back("Goat");

    list<string> l2(1, "is");
    l2.push_back("THE");

    l1.push_front("Haziq");
    l1.insert(next(l1.begin()), l2.begin(), l2.end());
    
    for(auto it : l1){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}