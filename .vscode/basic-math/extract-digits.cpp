#include<bits/stdc++.h>
using namespace std;

int main(){

    int in, lastDigit;
    vector<int> extracted, finalExtracted;//using vector to store elements so we can use the reverse function

    cout << "Enter the number: " << endl;
    cin >> in;

    while(in > 0){
        lastDigit = in % 10;
        extracted.push_back(lastDigit);
        in = in / 10;
    }
    
    cout << "Extracted this way: ";
    for(auto it : extracted){
        cout << it;
    }
    cout << "\n";

    //reversing the vector since elements will be extracted in units to tens order(not tens to unit order)
    reverse(extracted.begin(), extracted.end());

    cout << "Printing exactly how it was: ";
    for(vector<int>::iterator it = extracted.begin(); it!=extracted.end(); it++){
        cout << *(it);
    }

    return 0;

}