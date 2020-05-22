//
// Created by MANISH YADAV on 22/05/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;


//2calls apply EULER form
//q MEANS QUESTION
//A MEANS ANSWER
//roq rest of question

void sub_seq(string q,string a)
{
    if(q.length()==0)
    {
        cout<<a<<endl;
        return;
    }

    char ch=q[0];
    string roq=q.substr(1,q.length());

    sub_seq(roq,a+"-");
    sub_seq(roq,a+ch);


    return ;
}


int main ()
{
    sub_seq("abc","");
    return 0;
}