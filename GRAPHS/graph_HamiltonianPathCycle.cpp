//
// Created by MANISH YADAV on 30/07/20.
//


#include<iostream>
#include<vector>
#include<climits>
using namespace std;


class Edge{

public:
    int nbr;
    int wt;


};

vector<vector<Edge>> graph;


void addEdge(int v1,int v2, int wt)
{
    Edge e1;
    e1.nbr=v2;
    e1.wt=wt;
    graph[v1].push_back(e1);

    Edge e2;
    e2.nbr=v1;
    e2.wt=wt;
    graph[v2].push_back(e2);

    return;
}

void display()
{
    for(int v=0;v<graph.size();v++)
    {
        cout<<v<<"->";
        for(int e=0;e<graph[v].size();e++)
        {
            Edge e1=graph[v][e];
            cout<<"["<<e1.nbr<<"-"<<e1.wt<<"]";
        }
        cout<<"."<<endl;

    }
}




void hamiltonianPath(int s, vector<bool>& visited, string psf,int count,int originalSource)
{
    if(count==graph.size()-1)
    {
        psf+=to_string(s);
         cout<<psf;
         for(int n=0;n<graph[s].size();n++)
         {
             Edge e1=graph[s][n];
             if(e1.nbr==originalSource)
             {
                 cout<<"Cycle"<<endl;
                 return;   //this return is imp here
             }


         }
        cout<<"Path"<<endl;

        return;
    }

    visited[s]=true;

    for(int n=0;n<graph[s].size();n++)
    {
        Edge ne=graph[s][n];


        if(visited[ne.nbr]==false) {


            hamiltonianPath( ne.nbr, visited,psf+to_string(s),count+1,originalSource);


        }

    }
    visited[s]=false;//Node Post

    return ;

}



int main()
{
    graph.emplace_back(vector<Edge>());// for vertex 0
    graph.emplace_back(vector<Edge>());// 1
    graph.emplace_back(vector<Edge>());// 2
    graph.emplace_back(vector<Edge>()); // 3
    graph.emplace_back(vector<Edge>()); // 4
    graph.emplace_back(vector<Edge>());// 5
    graph.emplace_back(vector<Edge>());// 6

    addEdge(0,1,10);
    addEdge(1,2,10);
    addEdge(2,3,10);
    addEdge(0,3,40);
    addEdge(3,4,2);
    addEdge(4,5,3);
    addEdge(5,6,3);
    addEdge(4,6,8);
    addEdge(2,5,5);

    //display();
    cout<<endl;
    vector<bool> visited(7,false);

    hamiltonianPath(3,visited,"",0,3);





    return 0;
}