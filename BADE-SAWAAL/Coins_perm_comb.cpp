//
// Created by MANISH YADAV on 27/05/20.
//

//https://practice.geeksforgeeks.org/problems/combination-sum/0

#include<iostream>
#include<string>
#include "vector"
using namespace std;
//MY APPROACH
void Coin_perm(int cl,int sum,string ans)
{

    if(sum==0)
    {
        cout<<ans<<endl;
        return ;
    }
    if(sum>=2)
    {Coin_perm(cl+1,sum-2,ans+"2");}
    if(sum>=3)
    Coin_perm(cl+1,sum-3,ans+"3");
    if(sum>=5)
    Coin_perm(cl+1,sum-5,ans+"5");
    if(sum>=6)
    Coin_perm(cl+1,sum-6,ans+"6");

}
//SIR Approach
void coin_change_perm(int amt,string asf,vector<int>& v1)
{

    if(amt==0)
    {
        cout<<asf<<endl;
        return;
    }

    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]<=amt)
        coin_change_perm( amt-v1[i],asf+to_string(v1[i]),v1);
    }


}
//lci-> last coin index
void coin_change_comb(int amt,string asf,int lci,vector<int>& v1)
{

    if(amt==0)
    {
        cout<<asf<<endl;
        return;
    }

    for(int i=lci;i<v1.size();i++)
    {
        if(v1[i]<=amt)
            coin_change_comb( amt-v1[i],asf+to_string(v1[i]),i,v1);
    }


}




int main()
{
    vector<int> v1 {2,5,6,7};
    coin_change_perm(16,"",v1);
    //below one is my approach
    //Coin_perm(0,7,"");
    cout<<"combination"<<endl;
    coin_change_comb(16,"",0,v1);
    return 0;
}