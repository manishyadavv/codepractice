//
// Created by MANISH YADAV on 06/06/20.
//

//https://practice.geeksforgeeks.org/problems/print-all-possible-strings/1

//GOOD QUESTION

#include<iostream>
#include<string>
#include <vector>
using namespace std;


void getAns(string str, string temp, int i)
{
    int n = str.length();
    if(i == n-1)
    {
        temp = temp + str[i];
        cout<<temp+"$";
        return;
    }

    else
    {
        temp = temp + str[i];
        getAns(str,temp,i+1);
        temp = temp + " ";
        getAns(str,temp,i+1);
    }
}


/*You have to complete this function*/
void  printSpace(char str[])
{
    string s=str;
    string res="";
    getAns(s,res,0);
}


int main() {
    int t;

    cin>>t;
    while(t--)
    {   char str[10000];
        cin>>str;
        printSpace(str);
        cout<<endl;

    }

    return 0;
}