#include <bits/stdc++.h>
using namespace std;

bool checkv1(vector<double> v1){
        v1.clear();
        bool torf = v1.empty();
        return torf;
    }

    bool checkv2(vector<double> v2){
    //v2.clear();
    bool torf = v2.empty();
    return torf;
}

bool checkcopy(vector<double> copy){
    copy.clear();
    bool torf = copy.empty();
    return torf;
}

int main(){

    double inpvalue;
    cin >> inpvalue;
    pair<string, string> a = {"Goat", "Haziq"};
    cout << a.first << " " << a.second << endl;

    pair<int, pair<int, int>> b = {1, {2, 3}};
    cout << b.first << " " << b.second.first << " " << b.second.second << endl;

    pair<int, pair<int, pair<int, int>>> c = {1, {2, {3, 4}}};
    cout << c.first << " " << c.second.first << " " << c.second.second.first << " " << c.second.second.second << endl;
    
    pair<int , int> arr[] = {{1, 2}, {3, 4}, {5,6}};
    cout << arr[2].first << " " << arr[0].first << endl;

    vector<int> v;
    v.push_back(5);
    v.emplace_back(6);
    cout << "A simple vector" << endl << v[0] << "  " << v[1] << endl;
    vector<pair<int, int>> pvc;
    pvc.push_back({1, 2});
    pvc.emplace_back(3, 4);
    cout << "A vector of pairs" << endl;
    cout << pvc[0].first << " " << pvc[0].second << endl;
    cout << pvc[1].first << " " << pvc[1].second << endl;

    vector<double> v1(5, 3.14);
    v1.push_back(3.14);
    v1.emplace_back(3.14);
    // cout << "A vector of 5 elements with value of Pi" << endl;
    // for(int i = 0; i < v1.size(); i++){
    //     cout << v1[i] << " ";
    // }

    vector<double> v2(v1);
    // cout << endl << "A vector copied from another vector" << endl;
    // for(int i=0; i<v2.size(); i++){
    //     cout << v2[i] << " ";
    // }

    vector<double>::iterator it = v1.begin();
    it++;
    cout << endl << *(it) << endl;

    it +=2;
    cout << *(it) << endl;

    cout << "Using end iterator" << endl;
    vector<double>::iterator it1 = v1.end();
    it1--;
    cout << *(it1) << endl;
    
    cout << "Using at function for vector (same as v[0])" << endl;
    cout << v1.at(0) << endl;

    cout << "Using back operator for vectors" << endl;
    cout << v1.back() << endl;

    cout << "\n";
    cout << "Printing the entire vector using for loop and iterator" << endl;
    for(vector<double>::iterator it = v1.begin(); it!=v1.end(); it++){
        cout << *(it) << " ";
    }

    cout << "\n" << endl;
    cout << "Using auto function for iterators" << endl;
    for(auto it = v1.begin(); it!=v1.end(); it++){
        cout << *(it) << " ";
    }

    cout << "\n";
    for(auto it : v1){
        cout << it << " ";
    }

    cout << "\n" << endl;
    v1.erase(v1.end()-1);
    v1.erase(v1.begin(), v1.begin()+2);//removes the start and end-1 elements according to the parameter values
    cout << "Using erase function on vector" << endl;
    for(auto it : v1){
        cout << it << " ";
    }

    cout << "\n" << endl;
    v1.insert(v1.begin(), 3);
    v1.insert((v1.begin() + 1), 1, inpvalue);//insert a certain element a certain number of times according to the parameter values:
    // p1 = number of times: 
    // p2 = the element to insert p1 number of times
    v1.insert(v1.begin()+2, 1, 5);
    cout << "Using insert operator to insert elements anywhere in the vector" << endl;
    for(vector<double>::iterator it = v1.begin(); it!=v1.end(); it++){
        cout << *(it) << " ";
    }

    vector<double> copy(2, 314);
    v1.insert(v1.begin() + 3, copy.begin(), copy.end());
    cout << "\n" << endl;
    for(auto it : v1){
        cout << it << " ";
    }
    cout << "\n" << endl;

    cout << "Size of vector 1 is " << v1.size() << endl;
    cout << "Size of vector 2 is " << v2.size() << endl;
    cout << "Size of the mini vector is " << copy.size() << endl;

    cout << "\n Deleting the last element of all the vectors:" << endl;
    v1.pop_back();
    for(auto it : v1){
        cout << it << " ";
    }
    cout << "\n";
    v2.pop_back();
    for(auto it : v2){
        cout << it << " ";
    }
    cout << "\n";
    copy.pop_back();
    for(auto it : copy){
        cout << it << " ";
    }
    cout << "\n" << endl;

    cout << "Swapping vector 1 and vector 2" << endl;
    cout << "Before Swapping" << endl;
    cout << "Vector 1: ";
    for(auto it : v1){
        cout << it << " ";
    }
    cout << "\nVector 2: ";
    for(auto it : v2){
        cout << it << " ";
    }
    v1.swap(v2);
    cout << "\n\nAfter Swapping" << endl;
    cout << "Vector 1: ";
    for(auto it : v1){
        cout << it << " ";
    }
    cout << "\nVector 2: ";
    for(vector<double>::iterator it = v2.begin(); it!=v2.end(); it++){
        cout << *(it) << " ";
    }

    cout << "\n'nClearing out all the vectors" << endl;
    
    bool v1empty = checkv1(v1);
    bool v2empty = checkv2(v2);
    bool copyempty = checkcopy(copy);
    cout << "Vector 1 is empty: " << v1empty << endl;
    cout << "Vector 2 is empty: " << v2empty << endl;
    cout << "Mini vector is empty: " << copyempty << endl;

    return 0;

}
