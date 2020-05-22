//
// Created by MANISH YADAV on 22/05/20.
//

#include<iostream>
#include<string>
#include "vector"
using namespace std;

vector<string> gmp2(int sr, int sc, int dr, int dc)
{
    if(sr == dr && sc == dc)
    {
        vector<string> bp;
        bp.push_back("");
        return bp;
    }

    vector<string> stod;

    // h nbrs
    for(int ms = 1; ms <= dc - sc; ms++)
    {
        vector<string> ntod = gmp2(sr, sc + ms, dr, dc);
        for(int i = 0; i < ntod.size(); i++)
        {
            stod.push_back("h" + to_string(ms) + ntod[i]);
        }
    }

    // v nbrs
    for(int ms = 1; ms <= dr - sr; ms++)
    {
        vector<string> ntod = gmp2(sr + ms, sc, dr, dc);
        for(int i = 0; i < ntod.size(); i++)
        {
            stod.push_back("v" + to_string(ms) + ntod[i]);
        }
    }

    // d nbrs
    for(int ms = 1; ms <= dr - sr && ms <= dc - sc; ms++)
    {
        vector<string> ntod = gmp2(sr + ms, sc + ms, dr, dc);
        for(int i = 0; i < ntod.size(); i++)
        {
            stod.push_back("d" + to_string(ms) + ntod[i]);
        }
    }

    return stod;
}

int main(int argc, char** argv)
{
    vector<string> paths = gmp2(0, 0, 2, 2);
    cout << paths.size() << endl;
    for(int i = 0; i < paths.size(); i++)
    {
        cout << paths[i] << endl;
    }
}
//my mistake was SR-SC AND DR-DC
//KO CONSIDER KRKE RAKHNA HAI
//EASILY FORGETABLE