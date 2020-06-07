#include<iostream>
#include<string>
using namespace std;

int solve (string s) {

    int countl=0, countr=0,countq=0,ans=0;
    //cout<<s;
    for(int i=0;i<s.size();i++)
    {   //cout<<s[i];
        //char ch=s[i];
        cout<<s[i];
        if(s[i]=='L')
        {countl++;}
        else if(s[i]=='R')
        {countr++;}
        else
        {countq++;}
    }
    //cout<<countl<<countr;
    if(countl>countr)
    {
        ans= countl+countq-countr;
    }
    else
    {
        ans= countr+countq-countl;
    }

    return ans;

}

int main() {

    //ios::sync_with_stdio(0);
    //cin.tie(0);
//    int T;
//    cin >> T;
//    for(int t_i=0; t_i<T; t_i++)
//    {
       // int n;
       // cin >> n;
        string s;
        getline(cin, s);

        int out_;
        out_ = solve(s);
        cout << out_;
      //  cout << "\n";
    //}
}