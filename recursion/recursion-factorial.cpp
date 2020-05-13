
//
// Created by MANISH YADAV on 07/05/20.
//

#include<iostream>
using namespace std;

int fact(int n)
{
if(n==1)
{
    return 1;
}


    return n*fact(n-1);



}




int main()
{

  cout<<  fact(5);


    return 0;
}