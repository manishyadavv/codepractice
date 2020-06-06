//
// Created by MANISH YADAV on 06/06/20.
//

//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0


//TIP{ONE TEST CASE} SORTING OF STRING NEEDS TO BE DONE

#include<iostream>
#include<string>
#include <vector>
using namespace std;

void permutations(string s1, int arr[],string asf)
{
    if(asf.length()==s1.length())
    {
        cout<<asf<<" ";
        return;
    }


    //char ch=s1[0];
    //string ros=s1.substr(1,s1.length()-1);
    for(int i=0;i<s1.length();i++)
    {
        if(arr[i]!=1)
        {
           arr[i]=1;
            permutations(s1,arr,asf+s1[i]);
            arr[i]=0;
        }
    }
//THIS WAS LIKE COMBINATION OF STRING
// AGAR SAB PRINT KRNI HOTI STRINGS TO
// arr[i]=1; & arr[i]=0; HTA DETE TO SAB AA JATI


}




int main() {
    int t;

        cin>>t;
        while(t--)
        {
            string s;

            cin>>s;
            sort(s.begin(), s.end());
            int arr[s.length()];
            for(int i=0;i<s.length();i++)
            {
                arr[i]=0;
            }
            permutations(s,arr,"");
            cout<<endl;
        }

    return 0;
}