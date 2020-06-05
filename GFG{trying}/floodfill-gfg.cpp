//
// Created by MANISH YADAV on 05/06/20.
//

#include<iostream>
#include<string>
#include "vector"
using namespace std;

void floodfill(int x,int y,int k,int old,vector<vector<int>> &mat){

    if(x<0 || x >mat.size()-1 || y<0 || y>mat[0].size()-1 )
        return ;
    if(mat[x][y]==old){
        mat[x][y]=k;
        floodfill(x+1,y,k,old,mat);
        floodfill(x-1,y,k,old,mat);
        floodfill(x,y+1,k,old,mat);
        floodfill(x,y-1,k,old,mat);
    }


}

int main()
{  int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n,vector<int>(m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
        int x,y,k;
        cin>>x>>y>>k;
        int old=mat[x][y];
        floodfill(x,y,k,old,mat);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<mat[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}