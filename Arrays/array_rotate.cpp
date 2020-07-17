//
// Created by MANISH YADAV on 17/07/20.
//

#include<iostream>
#include<vector>
using namespace std;




void swap(int* a,int* b )
{

    int temp=*a;
    *a=*b;
    *b=temp;
}


void reverse(int* arr,int l ,int r)
{

    while(l<r)
    {
        swap(arr[l],arr[r]);
        l++;
        r--;
    }

}

void rotate(int* arr,int n,int k)
{
    //agar kabhi aisa case aaye ki 17 times krna  rotate
    //then we know size agar 7 hai to 7*2+3=17 so 3 bar hi krna h
    //also -3 is same as doing +4 rotation
    k=k%n;
    k=k<0?n+k:k;

    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
}

void display(int* arr , int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int * arr= new int [7]{2,9,8,1,3,5,7};
    rotate(arr,7,3);
    display(arr,7);
    rotate(arr,7,17);
    display(arr,7);
    rotate(arr,7,-51);
    display(arr,7);

}