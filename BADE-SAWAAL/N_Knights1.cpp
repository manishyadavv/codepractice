//
// Created by MANISH YADAV on 01/06/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;

static int counter=0;

bool isKnightSafe(vector<vector<bool>> chess,int r,int c)
{


    if(r>=2&&c>=1&&chess[r-2][c-1]==true)
    {   return false;
        }
    else if(r>=1&&c>=2&&chess[r-1][c-2]==true)
    {
        return false;
    }
    else if(r>=2&&c<chess.size()-1&&chess[r-2][c+1]==true)
    {return false;
    }

    else if(r>=1&&c<chess.size()-2&&chess[r-1][c+2]==true)
    {
        return false;
    }
    else
        return true;

}




void nqueen1(vector<vector<bool>>& chess,int cq,int lqi,int lqj,string asf)
{

    if(cq==chess.size())
    {
        counter++;
        cout<<counter<<"->"<<asf<<endl;
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
            if(chess[i][j]==false&&isKnightSafe(chess,i,j))
            {
                chess[i][j]=true;
                nqueen1(chess,cq+1,i,j,asf+to_string(i)+to_string(j)+" ");
                chess[i][j]=false;
            }
        }
    }

}




int main() {
    vector<vector<bool>> chess(3, vector<bool>(3, false));
    nqueen1(chess, 0, 0, -1, "");
    return 0;

}