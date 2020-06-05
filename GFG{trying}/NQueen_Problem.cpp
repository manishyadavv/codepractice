//
// Created by MANISH YADAV on 01/06/20.
//

//https://practice.geeksforgeeks.org/problems/n-queen-problem/0

//not optimal it is takes soo much time

#include<iostream>
#include<string>
#include "vector"
#include "time.h"
#include "iomanip"
using namespace std;


bool isQueenSafe(vector<vector<bool>>& chess,int row,int col)
{
    for(int i=col-1;i>=0;i--)
    {
        if(chess[row][i]==true)
        {
            return false;
        }
    }

    for(int i=row-1;i>=0;i--)
    {
        if(chess[i][col]==true)
        {
            return false;
        }
    }
    //pichla diagonal
    for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--)
    {
        if(chess[i][j]==true)
        {
            return false;
        }
    }
    //agla diagonal
    for(int i=row-1,j=col+1;i>=0&&j<chess[0].size();i--,j++)
    {
        if(chess[i][j]==true)
        {
            return false;
        }
    }


    return true;


}

//cq=current queen
//lqi last queen i last queen j
void nqueen1(vector<vector<bool>>& chess,int cq,int lqi,int lqj,string asf)
{

    if(cq==chess.size())
    {
        if(asf=="")
            cout<<"-1";
        else
        cout<<"["<<asf<<"]";
        return;
    }



    for(int i=lqi;i<chess.size();i++)
    {
        int j=lqj+1;
        if(i>lqi)
        {
            j=0;
        }
        for(;j<chess[0].size();j++)
        {
            if(chess[i][j]==false&&isQueenSafe(chess,i,j))
            {
                chess[i][j]=true;
                nqueen1(chess,cq+1,i,j,asf+to_string(j+1)+" ");
                chess[i][j]=false;
            }
        }
    }

}




int main()
{

    time_t start, end;

    time(&start);
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<bool>> chess (n,vector<bool>(n,false));
        nqueen1(chess,0,0,-1,"");
    }
    time(&end);


    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;

}
