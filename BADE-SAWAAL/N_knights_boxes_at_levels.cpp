//
// Created by MANISH YADAV on 01/06/20.
//



#include<iostream>
#include<string>
#include "vector"
using namespace std;

static int counter=0;

//ksf KNIGHTS SO FAAR BAITH LIYE


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
        if(isKnightSafe(chess,i,j))
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
        if(isKnightSafe(chess,i,j))
        {
            chess[i][j]=true;
            nknights(chess,i,j+1,ksf+1,asf+to_string(i)+to_string(j)+" ");
            chess[i][j]=false;
        }
    }


}


int main() {
    vector<vector<bool>> chess(3, vector<bool>(3, false));
    nknights(chess, 0, 0, 0, "");
    return 0;

}
