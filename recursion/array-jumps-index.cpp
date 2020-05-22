//
// Created by MANISH YADAV on 22/05/20.
//

//did on my own #PROUD

#include<iostream>
#include<string>
#include "vector"
using namespace std;


vector<string> gaj(vector<int> a1,int indx)
{

    if(indx==a1.size()-1)
    {vector<string> base;
        base.push_back("");
        return base;

    }


    vector<string> pstod;
    for(int step=1;step<=a1[indx];step++)
    {
        int nbr=indx+step;

        if (nbr<a1.size()) {


            vector<string> ntod = gaj(a1, nbr);

            for (int i = 0; i < ntod.size(); i++) {
                string str = to_string(step) + ntod[i];
                pstod.push_back(str);
            }
        }
    }
    return pstod;
}



int main()
{
    int size=10;
    vector<int> a1 {3,2,0,4,1,2,0,2,3,0,1};
    vector<string> ans=gaj(a1,0);
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;

}