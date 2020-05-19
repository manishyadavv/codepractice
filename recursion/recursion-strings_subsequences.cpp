//
// Created by MANISH YADAV on 18/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;



vector<string> string_subsequence(string str)
{

    if(str.size()==0)
    {
        vector<string> v;
        v.push_back("");
        return v;
    }

    char ch=str[0];
    //rest of the string
    string ros=str.substr(1,str.length());

    vector <string> rres=string_subsequence(ros);

    vector <string> mres;

    for(int i=0;i<rres.size();i++)
    {

        string rstr=rres[i];

        mres.push_back(('_' +rstr));
        mres.push_back(ch+rstr);
    }
    return mres;

}




int main()
{  vector<string> aaaa= string_subsequence("abc");

    for (int i=0;i<aaaa.size();i++)
    {
        cout<<aaaa[i]<<" ";
        cout<<endl;
    }
    return 0;
}