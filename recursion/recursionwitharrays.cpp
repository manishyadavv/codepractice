
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


int main()
{
    int arr[5]={10,20,30,40,50};
    recursionwitharrays(arr,0);
    return 0;
}