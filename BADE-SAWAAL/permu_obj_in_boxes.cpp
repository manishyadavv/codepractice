//
// Created by MANISH YADAV on 24/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;

void permutation_obj_box(vector<bool>& v1,int cl,int ll,string asf)
{

    if(cl==ll)
    {
        cout<<asf<<endl;
        return;
    }
//    for(int j=0;j<v;j++)
    if(cl<ll)
    for(int i=0;i<v1.size();i++)
    {

        if( v1[i]!=true)
        {   v1[i]=true;
            permutation_obj_box(v1,cl+1,ll,asf+to_string(cl)+"["+to_string(i)+"]"+" ");
            v1[i]=false;
            asf.erase(asf.length(),1);
        }


    }
    return ;



}


int main()
{   vector<bool> v1{false,false,false,false};
        permutation_obj_box(v1,0,2,"");

    return 0;
}