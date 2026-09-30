#include<bits/stdc++.h>
using namespace std;

int count(int num, int count){

    while(num!=0){
        count++;
        num = num/10;
    }

    return count;
}

int main(){

    int num, dup, digit, cube = 0;
    int rev = 0;
    int numCount = 0;
    // numCount = ;
    numCount = count(num, numCount);
    int cubeArr[numCount]; // Assuming maximum 10 digits
    cin >> num;
    dup = num;
    // cout << count(num, numCount) << endl;

    for(int i=0; i<numCount; i++){
        digit = num % 10;
        num/=10;

        cubeArr[i] = digit;
    }

    for(int i=0; i<numCount; i++){
        cube = cube + (cubeArr[i]*cubeArr[i]*cubeArr[i]);
    }

    if(cube == dup){
        cout << true;
    }
    else cout << false;
    

    return 0;
}