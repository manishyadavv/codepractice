//
// Created by MANISH YADAV on 08/06/20.
//

//https://practice.geeksforgeeks.org/problems/combination-sum/0

//same like coin change problem with combinations

#include<iostream>
#include<vector>
using namespace std;
void Helper(bool ar[10],int k,vector<int> &temp,bool &isEmpty){
    if(k<0) return;
    if(k==0){
        isEmpty=0;
        cout<<"(";
        int i;
        for(i=0;i<temp.size()-1;i++){
            cout<<temp[i]<<" ";
        }
        cout<<temp[i]<<")";
        return;
    }
    int prev=1;
    if(temp.size()>=1) prev=temp[temp.size()-1];
    for(int i=prev;i<=9;i++){
        if(ar[i]){
            temp.push_back(i);
            Helper(ar,k-i,temp,isEmpty);
            temp.pop_back(); // FOr Backtracking.
        }
    }
}
int main()
{
    //code
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        bool ar[10]={0};
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ar[x]=1;
        }
        cin>>k;
        vector<int> temp;
        bool isEmpty=1;
        Helper(ar,k,temp,isEmpty);
        if(isEmpty) cout<<"Empty";
        cout<<endl;
    }
    return 0;
}