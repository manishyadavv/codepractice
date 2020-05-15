
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
int printMax(int arr[],int indx)
{
    if(indx==4)
    {
     return arr[indx];
    }

    int misa = printMax(arr,indx+1);

    if(misa>=arr[indx])
    {return misa;}
    else
    { return arr[indx];}

}
int linearSearch(int arr[],int indx,int key)
{

    if(indx==5)
        return 0  ;
    if(arr[indx]==key)
    {cout<<"Found at"<<" "<<indx;
        return 0;
    }
    linearSearch(arr,indx+1,key);

    return 0;

}
int firstIndex(int arr[],int indx,int key)
{

if(indx==5)
{
    return -1;

}
    if(arr[indx]==key)
    {
        return indx;
    }
    //this else condition is helping in
    //like if 20 is found then during the recursion
    // above if condition will return indx otherwise
    // this else will return -1 kyuki base condition se
    // fisa me -1 to aa hi jana hai;
    else {
     int fisa=   firstIndex(arr, indx + 1, key);
     return fisa;
    }

}


int lastIndex(int arr[],int indx,int key) {
    //iss recursion call se pehle last tk aa gaye
    //iss last index ka -1 retun ka matlb hai ki key nhi milli

    //PLACEMENT OF THIS BASE CONDITION IS IMP TOO
    // IF IT IS PLACED BELOW CALL CAN LEAD TO INF RECURSION
    if (indx == 5) {
        return -1;

    }
    int lisa = lastIndex(arr, indx + 1, key);


    if(lisa==-1) {

        if (arr[indx] == key)
            return indx;
        else
            return -1;

    } else{
        return lisa;
    }

}

int* AllIndex(int arr[],int indx,int count,int key)
{
//SABSE IMP BAAT ISS QUESTION ME BASE CASE SE PAAR KRNE KE BAAD
// RESULT ARRAY KO HEAP ME BNAYA TO WO CLEAR NHI HOGI

    if(indx==4) {

        return new int[count];
    }


    if(arr[indx]==key)
    {
       int *res= AllIndex(arr, indx + 1, count + 1, key);
        res[count]=indx;
        return res;
    }

    else {
        int *res = AllIndex(arr, indx + 1, count, key);
        return res;

    }


}



int main()
{
    int arr[5]={10,20,30,20,50};
    cout<<printMax(arr,0);
    cout<<endl;
    linearSearch(arr,0,50);
    cout<<endl;
    cout<<firstIndex(arr,0,20);
    cout<<endl;
    cout<<lastIndex(arr,0,20);

    cout<<endl;
    int* arr2=AllIndex(arr,0,0,20);
    cout<<"indexes are"<<" ";
    for(int i =0;i<2;i++)
    {
        cout<<*(arr2+i)<<" ";
    }

    return 0;
}