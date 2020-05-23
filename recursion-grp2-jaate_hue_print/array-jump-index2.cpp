//
// Created by MANISH YADAV on 23/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;

//done_again #PROUD
//sneha_also_did XD I TAUGHT !!!!!
void array_jump(int src,int dst,string ans,vector<int> v1)
{

    if(src==dst)
    {
        cout<<ans<<endl;
        return ;
    }
    if(src>dst)
    {
        return;
    }
    for(int step=1;step<=v1[src];step++)
    {
        array_jump(src+step,dst,ans+to_string(step),v1);
    }



}




int main()
{
    vector<int> a1 {3,2,0,4,1,2,0,2,3,0,1};
    array_jump(0,10,"",a1);
}