//
// Created by MANISH YADAV on 31/07/20.
//


#include<iostream>
#include<vector>
#include<climits>
using namespace std;




static int counter=0;
void KnightTour(int r, int c, vector<vector<int>>& visited,int count)
{


    if(r<0||c<0||r>=visited.size()||c>=visited.size()||visited[r][c]!=0)
    {
        return;
    }
    else if(count==visited.size()*visited.size())
    {
        counter++;

        visited[r][c]=count;
        cout<<"******"<<counter<<"******"<<endl;
        for(int i=0;i<visited.size();i++)
        {
            for(int j=0;j<visited.size();j++)
                cout<<visited[i][j]<<" ";
            cout<<endl;
        }

        visited[r][c]=0;
     return;
    }

    visited[r][c]=count;


    //if(visited[r-2][c-1]==false&&r-2>0&&c-1>0)
    KnightTour(r-2,c-1,visited,count+1);

    //if(visited[r-2][c+1]==false&&r-2>0&&c+1<visited.size())
    KnightTour(r-2,c+1,visited,count+1);

    //if(visited[r+2][c-1]==false&&r+2<visited.size()&&c-1>0)
    KnightTour(r+2,c-1,visited,count+1);

    //if(visited[r+2][c+1]==false&&r+2<visited.size()&&c+1<visited.size())
    KnightTour(r+2,c+1,visited,count+1);

    //if(visited[r-1][c-2]==false&&r-1>0&&c-2>0)
    KnightTour(r-1,c-2,visited,count+1);

    //if(visited[r+1][c-2]==false&&r+1<visited.size()&&c-2>0)
    KnightTour(r+1,c-2,visited,count+1);

    //if(visited[r+1][c+2]==false&&r+1<visited.size()&&c+2<visited.size())
    KnightTour(r+1,c+2,visited,count+1);

    //if(visited[r-2][c+2]==false&&r-2>0&&c+2<visited.size())
    KnightTour(r-1,c+2,visited,count+1);

    visited[r][c]=0;


    return ;

}



int main()
{


    cout<<endl;

    //THIS IS THE WAY BY WHICH WE INITIALIZE 2D VECTOR false
    vector<vector<int>> visited(5,vector<int>(5,0));

    KnightTour(1,3,visited,1);





    return 0;
}