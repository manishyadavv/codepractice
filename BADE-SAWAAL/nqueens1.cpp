//
// Created by MANISH YADAV on 30/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;

static int counter=0;

//cq=current queen
void nqueen1(vector<vector<bool>>& chess,int cq,string asf)
{

    if(cq==chess.size())
    {
        counter++;
        cout<<counter<<"-"<<asf<<endl;
        return;
    }



    for(int i=0;i<chess.size();i++)
    {
        for(int j=0;j<chess[0].size();j++)
        {
            if(chess[i][j]==false)
            {
                chess[i][j]=true;
                nqueen1(chess,cq+1,asf+to_string(i)+to_string(j)+"-");
                chess[i][j]=false;
            }
        }
    }

}




int main()
{
    vector<vector<bool>> chess (4,vector<bool>(4,false));
    nqueen1(chess,0,"");
    return 0;

}