#include<bits/stdc++.h>
using namespace std;



int counter(int count){
    if(count == 10){
        return count;
    }
    else{
        cout << count << " ";
        count++;
        counter(count);
    }
}

int main(){

    int count = 0;
    count = counter(count);

    return 0;
}