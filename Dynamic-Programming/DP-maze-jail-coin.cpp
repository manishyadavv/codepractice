//
// Created by MANISH YADAV on 12/08/20.
//

#include<iostream>
#include "vector"
#include "algorithm"
using namespace std;



void printpaths(vector<vector<int>>& global,int i,int j,string psf)
{

    if(i==global.size()-1 &&j==global[0].size()-1)
    {
               cout<<psf;
               return ;
    }
    else if(i==global.size()-1)
    {
        printpaths(global, i, j + 1, psf + "h");
    }
    else if(j==global[0].size()-1)
    {
        printpaths(global, i + 1, j, psf + "v");
    }

        else {
               if (global[i][j + 1] > global[i + 1][j]) {
                   printpaths(global, i, j + 1, psf + "v");
               }
               else if (global[i][j + 1] < global[i + 1][j]) {
                   printpaths(global, i + 1, j, psf + "h");
               }
               else {
                   printpaths(global, i + 1, j, psf + "v");
                   printpaths(global, i, j + 1, psf + "h");
               }
           }
return ;
}


int main()
{


    vector<vector<int>> local{
            {2,7,3,8,0,3,7},
            {4,0,1,2,4,3,4},
            {3,8,5,9,0,8,1},
            {1,6,0,4,5,5,2},
            {6,2,9,5,7,0,6},
            {0,8,7,9,6,3,0},
            {1,3,5,0,5,1,0},

    };
    vector<vector<int>> global(7,vector<int>(7,0));

//    dp[6][6]=jailrooms[6][6];

//instead of making new matrix we updated the same matrix
//    for(int i=jailrooms[0].size()-2;i>=0;i--)
//    {
//        jailrooms[6][i]=jailrooms[6][i]+jailrooms[6][i+1];
//        jailrooms[i][6]=jailrooms[i][6]+jailrooms[i+1][6];
//    }
//
//    for(int i=jailrooms.size()-2;i>=0;i--){
//        for(int j=jailrooms[0].size()-2;j>=0;j--){
//            jailrooms[i][j]=min((jailrooms[i][j]+jailrooms[i][j+1]),(jailrooms[i][j]+jailrooms[i+1][j]));
//        }
//    }
//
//
//    //displaying
//    for(int i=0;i<jailrooms.size();i++) {
//        for (int j = 0; j < jailrooms[0].size(); j++) {
//            cout <<jailrooms[i][j]<<" ";
//        }
//    cout<<endl;
//    }
//    cout<<"Min coins required to pay and get out of jail is "<<jailrooms[0][0];
//

    //sir's Approach
    for(int i = local.size() - 1; i >= 0; i--){
        for(int j = local[0].size() - 1; j >= 0; j--){
            if(i == local.size() - 1 && j == local[0].size() - 1){
                global[i][j] = local[i][j];
            } else if(i == local.size() - 1){
                global[i][j] = local[i][j] + global[i][j + 1];
            } else if(j == local[0].size() - 1){
                global[i][j] = local[i][j] + global[i + 1][j];
            } else {
                global[i][j] = local[i][j] +
                                        min(global[i][j + 1],
                                        global[i + 1][j]);
            }
        }
    }

    for(int i=0;i<global.size();i++) {
        for (int j = 0; j < global[0].size(); j++) {
            cout <<global[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<"Min coins required to pay and get out of jail is "<<global[0][0];
    cout<<endl;
        printpaths(global,0,0,"");
}