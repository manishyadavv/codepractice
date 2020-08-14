//
// Created by MANISH YADAV on 15/08/20.
//

#include<iostream>
#include "vector"
#include "algorithm"
using namespace std;

int main()
{

    vector<vector<int>> local{
            {1, 5, 1, 0, 3},
            {1, 4, 0, 2, 3},
            {4, 0, 1, 3, 2},
            {2, 4, 0, 4, 1},
            {1, 2, 3, 2, 0},

    };
    vector<vector<int>> global(5,vector<int>(5,0));

    //sir's Approach
    for(int j = local[0].size() - 1; j >= 0; j--){
        for(int i = 0; i < local.size(); i++){
            if(j == local[0].size() - 1){
                global[i][j] = local[i][j];
            } else if(i == 0){
                global[i][j] = local[i][j] +
                               max(global[i][j + 1],
                                        global[i + 1][j + 1]);
            } else if(i == local.size() - 1){
                global[i][j] = local[i][j] +
                               max(global[i][j + 1],
                                        global[i - 1][j + 1]);
            } else {
                int f1 = max(global[i][j + 1], global[i + 1][j + 1]);
                int f2 = max(f1, global[i - 1][j + 1]);
                global[i][j] = local[i][j] + f2;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < global.size(); i++){
        ans = max(ans, global[i][0]);
    }

    for(int i=0;i<global.size();i++) {
        for (int j = 0; j < global[0].size(); j++) {
            cout <<global[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Total Coins digged "<<ans;
    cout<<endl;

}