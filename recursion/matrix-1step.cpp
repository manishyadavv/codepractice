//
// Created by MANISH YADAV on 22/05/20.
//



#include<iostream>
#include<string>
#include "vector"
using namespace std;

vector<string> ptm(int sr,int sc,int dr,int dc)
{

    if(sr==dr&&sc==dc)
    {
        vector<string> v1;
        v1.push_back("");
        return v1;
    }
//    if(sr>dr||sc>dc)
//    {
//        vector<string> v1;
//
//        return v1;
//    }

    vector<string> v1,v2,ans;
    if(sr<dr)
    {
        v1=ptm(sr+1,sc,dr,dc);
    }

    if(sc<dc)
    {
         v2=ptm(sr,sc+1,dr,dc);
    }

    for(int i=0;i<v1.size();i++)
    {
        string str=v1[i];
        ans.push_back("x"+str);
    }
    for(int i=0;i<v2.size();i++)
    {
        string str=v2[i];
        ans.push_back("y"+str);
    }
return ans;
}



int main()
{
    vector<string> ans =ptm(0,0,2,2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" "<<endl;
    }
    return 0;

}