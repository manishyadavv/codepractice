//
// Created by MANISH YADAV on 22/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;

void stair(int ques,string ans)
{

    if(ques==0)
    {
        cout<<ans<<endl;
        return;
    }
    if(ques<0)
    {
        ans="";
        return;
    }
    for(int step=1;step<=3;step++)
    {
        stair(ques-step,ans+to_string(step));
    }

}


int main()
{
    stair(7,"");
    return 0;

}