//
// Created by MANISH YADAV on 19/05/20.
//

#include<iostream>
#include<string>
#include "vector"
using namespace std;

string codes[]={
        ".",
        "abc",
        "def",
        "ghi",
        "jklm",
        "no",
        "pqrs",
        "tu",
        "vwxy",
        "ez"
};



vector<string> getpkc(string str)
{
    if(str.size()==0)
    {
        vector<string> v;
        v.push_back("");
        return v;
    }


    char ch=str[0]; // "8" AAYAA

    string ros=str.substr(1,str.length()-1); // "35" AAYA

    //YE FAITH HAI HMARA KI 35 DENE SE HUMKO gn , go , hn , ho , in, io
    // milna hi milna hai
    vector<string> rres=getpkc(ros); //35 ->   gn , go , hn , ho , in, io

    //ek ans vector bnaya
    vector<string> ans;

    //ISSE 8 KE CORRESPONDING STRING YAANI VWXY LELI
    //HUME MILA '8' CHAIYE 8 INTEGER KA TO 48 ASCII MINUS KRA
    // KABHI BHI CHARACTER KO INT BNANA HO TO 48 MINUS KRDO
    string code=codes[ch-48];

    //ab kuch nhi krna code ko ek tarike se mulitply krna hai
    //yani string ko concat krna hai upar rres me jo bhi strings hain

    for(int i=0;i<code.size();i++)
    {
        //ek ek character uthaya aur concat kr diya
        char chcode=code[i];

        for(int j=0;j<rres.size();j++)
        {
            string rstr=rres[j];
            ans.push_back(chcode+rstr);

        }
    }

    return ans;

}

int main()
{
   vector<string> aaaa= getpkc("835");

   for (int i=0;i<aaaa.size();i++)
   {
       cout<<aaaa[i]<<" ";
   }
    return 0;
}