#include<iostream>
using namespace std;

string name = "Rikazike";
int count = 0;

void fiveTimes(){
    if(count == 5){
        return;
    }
    else{
        cout << name << endl;
        count++;
        fiveTimes();
    }
}


int main(){

    
    fiveTimes();

    return 0;
}