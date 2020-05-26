//
// Created by MANISH YADAV on 26/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;

//in this solving we will be taking boxes as levels
//and whether box allow or not to sit on them
//in perm part we took boxes as options and objects as levels
void combination2(int cl,int tl,int bssf,int obj,string ans)
{

    if(cl==tl)
    {
        if(bssf==obj)
        {
            cout<<ans<<endl;
        }
        return;
    }

    combination2(cl+1,tl,bssf+1,obj,ans+to_string(cl));

    combination2(cl+1,tl,bssf,obj,ans);


}

int main()
{
    combination2(0,4,0,2,"");
    return 0;
}