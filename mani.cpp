#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int t,n,num,flag;
    vector<int> v1;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>num;
            v1.push_back(num);
        }


        for(int i=0;i<n-2;i++)
        {
            sort(v1.begin()+i,v1.begin()+i+3);

            if(is_sorted(v1.begin(),v1.end()))
            {
                flag=1;
                break;
            }


        }


        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}