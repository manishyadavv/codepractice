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
    cout << "enter length ";
    cin >> len;
    int inp;
    while (t--) {
        cin >> inp;
        v1.push_back(inp);
    }
    for (int i = 0; i < len; i++) {
        v1.insert(v1.begin() + i, v1[v1.size() - 1 ]);
        v1.erase(v1.begin() + v1.size() - 1 );
    }

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
return 0;
}