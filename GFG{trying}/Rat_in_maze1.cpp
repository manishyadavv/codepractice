//
// Created by MANISH YADAV on 05/06/20.
//


// User function template for C++

// m is the given matrix and n is the order of matrix
// MAX is the upper limit of N ie 5

//CORRECT
//https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1

#include<iostream>
#include<string>
#include "vector"
using namespace std;
const int MAX=100;

void flood_fill(int sr, int sc, int m[MAX][MAX],int n,string s,vector<string> &res)
{

    if(sr==n-1&&sc==n-1)
    {
        //cout<<str<<endl;
        res.push_back(s);
        return;
    }
    if(m[sr][sc]==0)
    {
        return;
    }
    m[sr][sc]=2;
    if(sr>0&&m[sr-1][sc]!=0&&m[sr-1][sc]!=2)
    {
        s=s+"U";
        flood_fill(sr-1,sc,m,n,s,res);
        s.erase(s.length() - 1, 1);
    }
    if(sc>0&&m[sr][sc-1]!=0&&m[sr][sc-1]!=2)
    {   s=s+"L";
        flood_fill(sr,sc-1,m,n,s,res);
        s.erase(s.length() - 1, 1);
    }
    if(sr<n-1&&m[sr+1][sc]!=0&&m[sr+1][sc]!=2)
    {   s=s+"D";
        flood_fill(sr+1,sc,m,n,s,res);
        s.erase(s.length() - 1, 1);
    }
    if(sc<n-1&&m[sr][sc+1]!=0&&m[sr][sc+1]!=2)
    {   s=s+"R";
        flood_fill(sr,sc+1,m,n,s,res);
        s.erase(s.length() - 1, 1);
    }

    m[sr][sc]=1;



}
vector<string> printPath(int m[MAX][MAX], int n) {

    vector<string> res;
    flood_fill(0,0,m,n,"",res);
    sort(res.begin(),res.end());
    if(res.size()==0)
    {
        res.push_back("-1");
    }
    return res;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[MAX][MAX];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        vector<string> res;
        res=printPath(arr,n);
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }cout<<endl;

    }
}