//
// Created by MANISH YADAV on 16/05/20.
//



#include<iostream>
#include<vector>
using namespace std;


int main() {


    vector<int> v1;
    int t, len;
    cout << "enter the size";
    cin >> t;
    int inp;
    while (t--) {
        cin >> inp;
        v1.push_back(inp);
    }
    for (int i = 0; i < v1.size()-1; i++) {

       if(v1[i]==v1[i+1])
       {
           v1.erase(v1.begin()+i+1);
           i--;
       }

    }

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    return 0;
}