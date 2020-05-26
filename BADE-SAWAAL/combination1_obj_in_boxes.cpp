//
// Created by MANISH YADAV on 27/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;
//my_approach
void combination_obj_box(vector<bool>& v1,int cl,int ll,int lib,string asf)
{

    if(cl==ll)
    {
        cout<<asf<<endl;
        return;
    }
    if(cl<ll)
        for(int i=lib+1;i<v1.size();i++)
        {

            if( v1[i]!=true)
            {   v1[i]=true;
                combination_obj_box(v1,cl+1,ll,lib,asf+to_string(cl)+"["+to_string(i)+"]"+" ");
                v1[i]=false;
                asf.erase(asf.length(),1);
            }


        }
    return ;



}

//SIR's approach
// WILL COMMIT LATER
//IT WAS BASED ON PERMUTATION2_B

int main()
{   vector<bool> v1{false,false,false,false};
    combination_obj_box(v1,0,2,0,"");

    return 0;
}