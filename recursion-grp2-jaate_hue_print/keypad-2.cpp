//
// Created by MANISH YADAV on 23/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;

string codes[]={
        ".",
        "abc",
        "def",
        "ghi",
        "jklm",
        "no",
        "pqrs",
        "tu",
        "vwxy",
        "ez"
};


void keypad(string ques,string ans)
{

    if(ques.length()==0)
    {
        cout<<ans<<endl;
        return;
    }



    char ch=ques[0];
    string roques=ques.substr(1,ques.length());

    string code=codes[ch-48];

    for(int i=0;i<code[i];i++)
    {
        keypad(roques,ans+code[i]);
    }
    return;

}


int main()
{
    keypad("835","");
    return 0;
}