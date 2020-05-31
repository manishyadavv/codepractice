//
// Created by MANISH YADAV on 30/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;

static int counter=0;


//we have to check given row,col ke piche ki row piche ka column
// and piche ka diagonal kyuki combination kr rhe hai
//aage ki queens aani baaki hai abhi
//idQueenSafe se bas check kr rhe hai piche kahi koi queen placed to nahi hai

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
        counter++;
        cout<<counter<<"-"<<asf<<endl;
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
                nqueen1(chess,cq+1,i,j,asf+to_string(i)+to_string(j)+"-");
                chess[i][j]=false;
            }
        }
    }

}




int main()
{
    vector<vector<bool>> chess (4,vector<bool>(4,false));
    nqueen1(chess,0,0,-1,"");
    return 0;

}