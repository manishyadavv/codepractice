//
// Created by MANISH YADAV on 23/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;


void matrixone( int sr,int sc,int dr,int dc,string ans)
{
    if(sr==dr&&sc==dc)
    {
        cout<<ans<<" "<<endl;
        return ;
    }


    if(sr<dr)
    matrixone(sr+1,sc,dr,dc,ans+"x");

    if(sc<dc)
    matrixone(sr,sc+1,dr,dc,ans+"y");

    return;

}



int main()
{
    matrixone(0,0,2,3,"");
}