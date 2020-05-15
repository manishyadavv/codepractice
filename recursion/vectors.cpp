//
// Created by MANISH YADAV on 15/05/20.
//


#include<iostream>
#include<vector>
using namespace std;


int main()
{




    //declare
    vector <int> v;

    //add
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    //add elements in between
    v.insert(v.begin()+1,22);


    //JO YE BEGIN() AUR END() HAIN YE SAB POINTERS HAI
    //MTLB BEGINING VALUE KO POINTING POINTER RETURN KARENGE
    //NICHE JO LOOP HAI USME I=V.BEGIN() NHI LE SKTE KYUKI WO EK POINTER HAI

    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //delete at end
    v.pop_back();

    //delete at specific location

    v.erase(v.begin()+1);
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}