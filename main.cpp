
#include<iostream>
#include<string>
#include "vector"
using namespace std;
//
// Created by MANISH YADAV on 23/05/20.
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
        ans.push_back("H"+str);
    }
    for(int i=0;i<v2.size();i++)
    {
        string str=v2[i];
        ans.push_back("V"+str);
    }
    return ans;
}


vector<string> getSafePath(vector<string> journeys)
{
    vector<string> res;
    for(int i=0;i<journeys.size();i++) {
        string s = journeys[i];

        int x= s[0]-48;
        int y=s[1]-48;
        int k=s[2]-48;
        vector<string> v1=ptm(0,0,x,y);
        cout<<endl;
        for (int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        sort(v1.begin(),v1.end());
        for (int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        res.push_back(v1[k]);
    }

return res;


}

int main()
{
    vector<string> journeys={"222","223"};

    vector<string> aaaa=getSafePath(journeys);

//    for (int i=0;i<aaaa.size();i++)
//    {
//        cout<<aaaa[i]<<" ";
//    }


}
