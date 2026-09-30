#include<bits/stdc++.h>
using namespace std;

int main(){

    int num, dup, position = 1;
    cin >> num;
    dup = num;
    // int arrOfDivisors[num];
    vector<int> ls;

    for(int i=1; i*i<=num; i++){
        if(num%i==0){
            ls.push_back(i);
            if(num/i!=i){
            ls.push_back(num/i);
        }
        }
    }

    // sort(ls.begin(), ls.end());
    for(int i=0; i<ls.size(); i++){
        for(int j=i+1;j<ls.size();j++){
            if(ls[j]<ls[i]){
                int temp = ls[i];
                ls[i] = ls[j];
                ls[j] = temp;
            }
        }
    }
    
    for(int i=0; i<ls.size(); i++){
        cout << ls[i] << endl;
    }

    return 0;
}