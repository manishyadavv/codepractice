#include <iostream>
using namespace std;


long long int reverse(long long int n)
{
    long long int reversedno=0,remainder;

    while(n!=0)
    {   remainder=n%10;
        reversedno=reversedno*10+remainder;
        n=n/10;
    }
    return reversedno;
}
long long int power(long long int n,long long int p)
{
    if(p==0)
        return 1;

    long long int res1,mod1=1000000007;
    res1=power(n,p/2);

    if(p%2==0)
    {
        return ((res1%mod1)*(res1%mod1))%mod1;
    }
    else
        return (n*((res1*res1)%mod1))%mod1;
    // long long int temp,b=1000000007;
    // if( y == 0)
    //     return 1;
    // temp = power(x, y/2);
    // if (y%2 == 0)
    //     return ((temp%b)*(temp%b))%b;
    // else
    //     return (x*((temp*temp)%b))%b;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {   long long int n,r;
        cin>>n;
        r=reverse(n);
        cout<< power(n,r);
        cout<<endl;

    }
    return 0;
}