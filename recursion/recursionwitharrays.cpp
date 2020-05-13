
//
// Created by MANISH YADAV on 13/05/20.
//


#include<iostream>
using namespace std;
//Expectation f(arr,0)=> 10 20 30 40 50
//Faith f(arr,1)=> 20 30 40 50
//E<=>F F(arr,n)=coutF(arr,n+1)

int recursionwitharrays(int arr[],int size)
{
    if(size==5)
        return 0 ;

    cout<<arr[size]<<" ";
    recursionwitharrays(arr,size+1);
    return 0;

}

//Expectation=> print champion from arr we want
// Faith => we know champion from arr[1]-arr[n],
//E<=>F arr[1]-arr[n] ka champion agar arr[0] se bada to return champion else return arr[0]
int printMax(int arr[],int size)
{
    if(size==4)
    {
     return arr[size];
    }

    int misa = printMax(arr,size+1);

    if(misa>=arr[size])
    {return misa;}
    else
    { return arr[size];}

}
int linearSearch(int arr[],int size,int key)
{

    if(size==5)
        return 0  ;
    if(arr[size]==key)
    {cout<<"Found at"<<" "<<size;
        return 0;
    }
    linearSearch(arr,size+1,key);

    return 0;

}


int main()
{
    int arr[5]={10,20,30,40,50};
    cout<<printMax(arr,0);
    cout<<endl;
    linearSearch(arr,0,50);
    return 0;
}