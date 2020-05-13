//
// Created by MANISH YADAV on 05/05/20.
//
#include<iostream>
using namespace std;

void pid(int x)
{
    if(x==0)
    {
        return ;
    }
    cout<<x<<",";
    pid(x-1);
    cout<<x<<",";

}


int main()
{
    pid(5);
    return 0;
}