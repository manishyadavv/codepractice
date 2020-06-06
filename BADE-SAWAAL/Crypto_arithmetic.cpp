//
// Created by MANISH YADAV on 06/06/20.
//


#include<iostream>
#include<string>
#include "vector"
using namespace std;


static string s1,s2,s3;
static int counter=0;
int getNumber(string s1,int mapping[])
{int num = 0;
    int pv = 1;
    for(int i = s1.length() - 1; i >= 0; i--){
        num += pv * mapping[s1[i]-97];
        pv *= 10;
    }

    return num;

}

void crypto(string unique,int num[] ,int mapping[])
{

    if(unique.length()==0)
    {
//        for(char i = 0; i < 26; i++){
//                if(mapping[i] != -1){
//                    cout<< mapping[i];
//
//                }
//            }
//        cout<<endl;

        int num=getNumber(s1,mapping);
        int num2=getNumber(s2,mapping);
        int num3=getNumber(s3,mapping);
        //cout<<num<<num2<<num3;
        if(num+num2==num3)
        {
            counter++;
            cout<<counter<<".";
            for(char i = 0; i < 26; i++){
                if(mapping[i] != -1){
                    char ch=i+97;
                    cout<<ch<<"="<< mapping[i]<<" " ;

                }
            }
            cout<<endl;
        }

      return;

    }


    char ch=unique[0];
    string ros=unique.substr(1,unique.length()-1);


    for(int i=0 ; i<=9 ; i++)
    {
        if(num[i]!=1)
        {
            mapping[ch-97]=i;
            num[i]=1;
            crypto(ros,num,mapping);
            num[i]=0;
            mapping[ch-97]=-1;

        }

    }

}

string unique(string s1)
{
    string unique;
    int arr[25]={0};
    for(int i=0;i<s1.length();i++)
    {
        if(arr[s1[i]-97]==0)
        {
            unique=unique+s1[i];
            arr[s1[i]-97]=1;
        }
    }

    return unique;
}

int main()
{
    string s,uniqu;
     s1="send";
     s2="more";
     s3="money";

      int num[10]={0};
        int res[26];
    for(char i = 0; i < 26; i++){
        res[i]=-1;
    }
      s=s1+s2+s3;

      uniqu=unique(s);
        //cout<<uniqu;
      crypto(uniqu,num,res);

    return 0;

}