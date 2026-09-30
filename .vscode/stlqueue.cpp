#include<bits/stdc++.h>
using namespace std;

int main(){


    queue<int> q1;
    q1.push(1);
    q1.push(2);
    cout << q1.back() << endl;
    q1.pop();
    cout << q1.front() << endl;
    
        cout << "Time Complexity of Queue is O(1) (Constant Time)" << endl;

    return 0;

}