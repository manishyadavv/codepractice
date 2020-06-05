//
// Created by MANISH YADAV on 05/06/20.
//

//https://practice.geeksforgeeks.org/problems/total-number-of-strings/0

//isme direct formulae se print kr diya but actual me
//i did with all permutations so a ko bhi alag alag treat kr rha hai

#include <iostream>
#include "vector"
using namespace std;




static int counter=0;
void permutations(int size,string asf,vector<int> v1)
{

if(size==0)
{  counter++;
//    cout<<counter<<endl;

    return;
}
    permutations(size - 1, asf + "a",v1);

    if (v1[1] > 0 && size > 0) {
        v1[1]=v1[1]-1;
        permutations(size - 1, asf + "b",v1);
        v1[1]+=1;

    }
    if (v1[2] > 0 && size > 0) {
        v1[2]=v1[2]-1;
        permutations(size - 1, asf + "c",v1);
        v1[2]+=1;
    }


}
int main() {
    int t;
    cin>>t;
    while(t--)

    {   int n ;
        cin>>n;
            vector<int> v1;
            v1.push_back(INT_MAX);
            v1.push_back(1);
            v1.push_back(2);
//            v1.push_back(1);

        permutations(n,"",v1);
        cout<<counter<<endl;
        counter=0;
    }
    return 0;
}