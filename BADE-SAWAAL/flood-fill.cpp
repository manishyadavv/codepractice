//
// Created by MANISH YADAV on 24/05/20.
//

//ALTHOUGH ITS WORKING BUT BAD FOR PERFORMANCE{when used w/o ref
// baar baar vector bnte rahenge}
//BECAUSE BOHT SARE VECTORS BAN RHE HAIN AUR
//AUR STRINGS BHI NAYI NAYI BAN RHI HAI
// SO USE & REFERENCE TO PASS VECTORS ANS STRINGS

//JAB STRING REFERENCE SE JAYEGI TO str+"t" error dega becuase its expecting
//reference so instead use str=str+"t";
//also ek dikkt aur kya rhegi ki wapas aate time kahi charo traf
//obstacle hui to piche tk ki string clear krte hue aana padega

//CPP me string vector ke samaan behave krti hai
//erase function use krenge str.erase(point,point ke aage ke kitne udane hain)

#include<iostream>
#include<string>
#include "vector"
using namespace std;

void flood_fill(int sr, int sc, vector<vector<int>> maze,string& str)
{

    if(sr==maze.size()-1&&sc==maze[0].size()-1)
    {
        cout<<str<<endl;
        return;
    }

    maze[sr][sc]=2;
    if(sr>0&&maze[sr-1][sc]!=1&&maze[sr-1][sc]!=2)
    {
        str=str+"t";
        flood_fill(sr-1,sc,maze,str);
        str.erase(str.length() - 1, 1);
    }
    if(sc>0&&maze[sr][sc-1]!=1&&maze[sr][sc-1]!=2)
    {   str=str+"l";
        flood_fill(sr,sc-1,maze,str);
        str.erase(str.length() - 1, 1);
    }
    if(sr<maze.size()-1&&maze[sr+1][sc]!=1&&maze[sr+1][sc]!=2)
    {   str=str+"d";
        flood_fill(sr+1,sc,maze,str);
        str.erase(str.length() - 1, 1);
    }
    if(sc<maze[0].size()-1&&maze[sr][sc+1]!=1&&maze[sr][sc+1]!=2)
    {   str=str+"r";
        flood_fill(sr,sc+1,maze,str);
        str.erase(str.length() - 1, 1);
    }

    maze[sr][sc]=0;
}

int main() {
    vector<vector<int>> maze{
            {0, 1, 0, 0, 0, 0, 0, 1},
            {0, 1, 0, 1, 1, 1, 0, 1},
            {0, 1, 0, 1, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 1, 1, 1},
            {0, 1, 0, 1, 0, 0, 0, 0},
            {0, 1, 0, 1, 1, 1, 1, 0},
            {0, 1, 0, 1, 1, 1, 1, 0},
            {0, 1, 0, 0, 0, 0, 0, 0},
    };

    string st="";
    flood_fill(0, 0, maze, st);
}