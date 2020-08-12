//
// Created by MANISH YADAV on 08/08/20.
//


#include<iostream>
using namespace std;

int  stairs(int n ,int qb[])
{
//0 se 0 tk utarne ke kitne tareeke hai
    if(n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        return 0;
    }
    else if(qb[n]!=0)
    {
        return qb[n];
    }


    int  fmn1 = stairs(n - 1, qb);
    int fmn2 = stairs(n - 2, qb);
    int fmn3 = stairs(n - 3, qb);

    int fib = fmn1 + fmn2 + fmn3;

    qb[n] = fib;
    return fib;
}




int main(){

    int n =3;
    int qb[n+1];
    for(int i=0;i<n+1;i++)
    {
        qb[i]=0;
    }
    cout<<"total number of paths climb downstairs "<<stairs(n,qb);

}