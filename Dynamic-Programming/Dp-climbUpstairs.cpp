//
// Created by MANISH YADAV on 09/08/20.
//


#include<iostream>
using namespace std;

int dpUpstairsPaths(int arr[],int n)
{
    int storage[n];
    for(int i=0;i<n;i++)
    {
        storage[i]=0;
    }

    storage[n-1]=1;

    //ye loop me i>=0 me equals to ka khas dhyan rakhe

    for(int i=n-2;i>=0;i--)
    {//IMP NOTE HERE IS 12 WALA BOX FAT JAEGA KYUKI 14 SE AAGE JUMP KR SKTA H
        //TO LOOP ME J<N IS IMP
        for(int j=i+1;j<=arr[i]+i&&j<n;j++)
        {
            storage[i]=storage[i]+storage[j];
        }

    }
    return storage[0];


}
int DP_MIN_steps(int arr[],int n)
{
    int storage[n];
    for(int i=0;i<n;i++)
    {
        storage[i]=0;
    }

    storage[n-1]=0;

    //ye loop me i>=0 me equals to ka khas dhyan rakhe

    for(int i=n-2;i>=0;i--)
    {//IMP NOTE HERE IS 12 WALA BOX FAT JAEGA KYUKI 14 SE AAGE JUMP KR SKTA H
        //TO LOOP ME J<N IS IMP
        //NULL wale ke liye we do this
        if(arr[i]==0){
            storage[i]=n;
        }
        else{
            int min=INT_MAX;
        for(int j=i+1;j<=arr[i]+i&&j<n;j++)
        {

            if(storage[j]<min)
            {
                min=storage[j];
            }

        }
        storage[i]=min+1;

    }}
    //checking for printing
//    for(int j=0;j<n;j++)
//    {
//        cout<<storage[j]<<" ";
//    }
    return storage[0];


}



int main()
{
    int arr[]={4,2,0,0,2,4,6,3,1,0,1,2,3,1,1};

    cout<<dpUpstairsPaths(arr,15)<<endl;

    cout<<DP_MIN_steps(arr,15);


}