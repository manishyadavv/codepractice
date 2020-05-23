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
    if(sr>dr||sc>dc)
    {
        return;
    }

    for(int i=1;sr+i<=dr;i++)
        matrixone(sr+i,sc,dr,dc,ans+"y"+to_string(i));

    for(int i=1;sc+i<=dc;i++)
        matrixone(sr,sc+i,dr,dc,ans+"x"+to_string(i));

    for(int i=1;sr+i<=dr&&sc+i<=dc;i++)
        matrixone(sr+i,sc+i,dr,dc,ans+"d"+to_string(i));

    return;

}



int main()
{
    matrixone(0,0,1,2,"");
}