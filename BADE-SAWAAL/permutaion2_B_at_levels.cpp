//
// Created by MANISH YADAV on 27/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;

void printpermu2(int cl,int tl,int bssf,string ans,vector<bool>& obj)
{
if(cl==tl)
{
    if(bssf==obj.size())
    {
        cout<<ans<<endl;
    }
    return;
}


    printpermu2(cl+1,tl,bssf,ans,obj);
    for(int i=0;i<obj.size();i++)
    {
        if(obj[i]!=true)
        {
            obj[i]=true;
            printpermu2(cl+1,tl,bssf+1,ans+to_string(i)+"->"+to_string(cl)+" ",obj);
            obj[i]=false;
        }
    }


}

int main()
{
    vector<bool> obj{false,false};
    printpermu2(0,4,0,"",obj);
    return 0;
}
