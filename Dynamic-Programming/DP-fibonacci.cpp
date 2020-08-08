//
// Created by MANISH YADAV on 08/08/20.
//

#include<iostream>
using namespace std;

int fibonacci(int n ,int qb[])
{

    if(n==0||n==1)
    {
        return n;
    }
    if(qb[n]!=0)
    {
        return qb[n];
    }


    int fmn1=fibonacci(n-1,qb);
    int fmn2=fibonacci(n-2,qb);
    int fib= fmn1+fmn2;
    qb[n]=fib;
    return fib;


}


int main(){

    int n =44;
    int qb[n+1];
    for(int i=0;i<n+1;i++)
    {
        qb[i]=0;
    }
    cout<<fibonacci(n,qb);

}