//
// Created by MANISH YADAV on 01/06/20.
//



#include<iostream>
#include<string>
#include "vector"
using namespace std;

static int counter=0;

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


void nknights(vector<vector<bool>> chess,int i , int j ,int ksf,string asf)
{

    if(i==chess.size()&&j==0)
    {
        if(ksf==chess.size())
        {counter++;
            cout<<counter<<" "<<asf<<endl;

        }
        return ;
    }

    else if(j==chess.size()-1)
    {
        //no -> nahi baithaya
        nknights(chess,i+1,0,ksf,asf);

        //yes -> baitha rahe hai
        if(isQueenSafe(chess,i,j))
        {
            chess[i][j]=true;
            nknights(chess,i+1,0,ksf+1,asf+to_string(i)+to_string(j)+" ");
            chess[i][j]=false;
        }
    }

    else{
        //no -> nahi baithaya
        nknights(chess,i,j+1,ksf,asf);

        //yes -> baitha rahe hai
        if(isQueenSafe(chess,i,j))
        {
            chess[i][j]=true;
            nknights(chess,i,j+1,ksf+1,asf+to_string(i)+to_string(j)+" ");
            chess[i][j]=false;
        }
    }


}


int main() {
    vector<vector<bool>> chess(4, vector<bool>(4, false));
    nknights(chess, 0, 0, 0, "");
    return 0;

}
