//
// Created by MANISH YADAV on 03/06/20.
//

#include<iostream>
#include "vector"
#include "unordered_set"
using namespace std;


void wordbreak(string ques,string ans,unordered_set<string> dictionary)
{
    if(ques.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    for(int i=1;i<=ques.length();i++)
    {
        string prefix=ques.substr(0,i);
        if(dictionary.count(prefix)==1)
        {
            string ros=ques.substr(i,ques.length()-prefix.length());
            wordbreak(ros,ans+"-"+prefix,dictionary);
        }

    }

}




int main()
{
    unordered_set<string> dictionary;

    dictionary.insert("man");
    dictionary.insert("go");
    dictionary.insert("mango");
    dictionary.insert("ice");
    dictionary.insert("cream");
    dictionary.insert("icecream");
    dictionary.insert("sam");
    dictionary.insert("sung");
    dictionary.insert("samsung");

    wordbreak("mangoicecreamsamsung","",dictionary);
}