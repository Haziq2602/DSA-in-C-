#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_set<string> uoset;//Time Complexity of all operations in Unordered set is O(1)
    uoset.insert("a");//all the operations similar to set, except the lower_bound and upper_bound work.
    uoset.emplace("random");//all operations work under O(1) Time Complexity
    uoset.emplace("asdfgh");//only in worst case scenarios the Time Complexity is O(n) {rare cases}
    uoset.insert("text");
    uoset.insert("qwerty");

    // for(auto uoit : uoset){
    //     cout << uoit << " ";
    // }
    for(unordered_set<string>:: iterator it = uoset.begin(); it!=uoset.end(); it++){
        cout << *(it) << " "; 
    }

    return 0;

}