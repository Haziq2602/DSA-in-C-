#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> stack1;
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);
    stack1.push(40);
    stack1.push(50);
    cout << stack1.top() << endl;
    stack1.pop();
    cout << stack1.top() << endl;
    cout << "\n" << stack1.size() << endl;

    stack<int> stack2;
    stack2.swap(stack1);
    cout << stack2.top() << endl;

    cout << "Time Complexity of Stack is O(1)" << endl;
    
    return 0;
}