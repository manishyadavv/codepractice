//
// Created by MANISH YADAV on 07/05/20.
//


#include<iostream>
using namespace std;
//taking O(n) time
int fact(int m,int n)
{
    if(n==0)
    {
        return m;
    }
    return m*fact(m,n-1) ;

}

//logn time takes and stack size is small too
int factBetter(int x,int n)
{
    if(n==0)
    {
        return 1;
    }

    int xpnb2=factBetter(x,n/2);
    int xpn=xpnb2*xpnb2;

    if(n%2==1)
    {
        xpn=xpn*x;
    }

    return xpn;
}

int main()
{

    cout<<  factBetter(5,3);


    return 0;
}