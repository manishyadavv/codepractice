//
// Created by MANISH YADAV on 17/07/20.
//


#include<iostream>
#include<vector>
using namespace std;


//DID myself using the concept
//based on story of self made and parent taker
//agar fayda ho rha ho parents se to take it

void kadane(vector<int>& v1,int n)
{
    int currsum,bestsum;
    int currstart=0,currend=0,beststart=0,bestend=0;

    currsum=v1[0];
    bestsum=v1[0];

    for(int i=1;i<n;i++)
    {
        if(currsum+v1[i]>=v1[i])
        {
            currsum+=v1[i];
            //currstart=i;
            currend=i;
            if(currsum>=bestsum)
            {
                bestsum=currsum;
                beststart=currstart;
                bestend=currend;
            }

        } else{
            currsum=v1[i];
            currstart=i;
                //currend=i;
            if(currsum>=bestsum)
            {
                bestsum=currsum;
                beststart=currstart;
                bestend=currend;
            }


        }
    }

    cout<<bestsum<<endl<<"From "<<beststart<<endl<<"To "<<bestend;

}


int main ()
{
    vector <int> arr{2,4,3,-6,-4,1,7,-2,6,4,-3,2,3,-9,-6,-4,4,8};
    kadane(arr,18);

}


