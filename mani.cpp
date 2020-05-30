
#include<iostream>
#include<string>
#include "vector"
using namespace std;
//GFG PRINT COMB2 (HARD) QUESTION ALMOST DONE
void printComb(int sum,string ans,int li,vector<int>& v1,bool arr[])
{
    if(sum==0)
    {
        cout<<"("<<ans<<")";
        return;
    }

    for(int i=li+1;i<v1.size();i++)
    {
        if(v1[i]<=sum &&arr[i]==false)

        {   arr[i]=true;
            printComb(sum-v1[i],ans+to_string(v1[i]),i,v1,arr);
            arr[i]=false;
        }
    }

}
int main() {

    int t,n,inp,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;

        vector<int> v1;
        for(int i=0;i<n;i++)
        {
            cin>>inp;
            v1.push_back(inp);
        }
        //sort(v1.begin(),v1.end());
        cin>>sum;
       bool arr[n];
       for(int i=0;i<n;i++)
       {
           arr[i]=false;
       }
        printComb(sum,"",0,v1,arr);
        cout<<endl;
    }
    return 0;
}