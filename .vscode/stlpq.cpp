#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int, vector<int>, less<int>> pq; //max heap
    pq.push(10);
    pq.push(30);
    pq.push(40);// Time Complexity log(n)
    pq.pop(); // Time Complexity log(n)
    cout << pq.top() << endl; // Time Complexity O(1)

    priority_queue<string, vector<string>, greater<>> pq1; //min heap
    pq1.push("Hello");
    pq1.push("Hell");
    cout << pq1.top() << endl; // Time Complexity O(1)

    return 0;
}