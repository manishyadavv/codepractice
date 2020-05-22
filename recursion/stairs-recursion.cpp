//
// Created by MANISH YADAV on 20/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;



//BASE CASE THODA IMP H IDHR
//ZERO SE ZERO EK PATH HAI , KOI MOVEMENT MAT KRO
//AUR -1 AND -2 PAR JANE KE BAAD CLIMB NHI KR SKTE

vector<string> get_stair_paths(int src)
{
    if(src==0)
    {
        vector<string> v1;
        v1.push_back("");
        return v1;
    }

    else if(src<0)
    {
        vector<string> v1;
        return v1;

    }
    vector<string> stod;
    for(int step=1;step<=3;step++)
    {
        int nbr=src-step;
        vector<string> ntod=get_stair_paths(nbr);
        for(int i=0;i<ntod.size();i++)
        {
            string ntodpath=ntod[i];
            string stodpath=to_string(step)+ntodpath;
            stod.push_back(stodpath);
        }

    }
return stod;


}

int main()
{
    vector <string> paths= get_stair_paths(7);

    for(int i=0;i<paths.size();i++)
    {
        cout<<paths[i]<<" ";
    }
    return 0;
}
