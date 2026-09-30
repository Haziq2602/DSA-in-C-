#include<bits/stdc++.h>
using namespace std;

int main(){
    
    deque<int> dq1;
    dq1.push_front(10);
    dq1.push_back(20);

    dq1.emplace_back(30);
    for(auto i : dq1){
        cout << i << " ";
    }
    cout << "\n";


    deque<int> dq2 = {1,2,3,4,5,6,7,8,9,10};
    dq2.insert(dq2.begin(), dq1.begin(), dq1.end());
    
    dq2.erase(dq2.begin()+2, dq2.end()-2);
    dq1.clear();
    for(auto i : dq2){
        cout << i << " ";
    }
    cout << "\n";
    
    if(dq1.empty()){
            cout << "The queue is empty" << endl;
    }
    else{
        for(auto it : dq1){
            cout << it << " ";
        }
    }


    return 0;

}