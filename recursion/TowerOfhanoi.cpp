//
// Created by MANISH YADAV on 13/05/20.
//

#include<iostream>
using namespace std;

//print instructions to move n shells from st to dt
//using the ht and rules
// Rules
// high on low XX
//one at a time
//topmost shell can be picked

int toh(int shells, int sourcetower,int desttower, int helptower)
{
    if(shells==0)
        return 0;


    //n_shd
    toh(shells-1,sourcetower,helptower,desttower);

    cout<<shells<<"{"<<sourcetower<<"->"<<desttower<<"}"<<endl;
    //n_hds
    toh(shells-1,helptower,desttower,sourcetower);


    return 0;

}


int main()
{
    toh(4,1,2,3);
    return 0;
}