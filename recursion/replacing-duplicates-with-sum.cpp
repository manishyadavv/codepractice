//
// Created by MANISH YADAV on 16/05/20.
//


#include<iostream>
#include<vector>
using namespace std;


int main() {


    vector<int> v1;
    int t;
    cout << "enter the size";
    cin >> t;
    int inp;
    while (t--) {
        cin >> inp;
        v1.push_back(inp);
    }int sum=0;
    for (int i = v1.size()-2; i>=0; i--) {

        if(v1[i]==v1[i+1])
        {
            sum+=v1[i+1];
            v1.erase(v1.begin()+i+1);

        } else{
            sum+=v1[i+1];
            v1.erase(v1.begin()+i+1);
            v1.insert(v1.begin()+i+1,sum);
            sum=0;

        }

    }
   v1[0]+=sum;
//    v1.insert(v1.begin(),v1[0]);


    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    return 0;
}