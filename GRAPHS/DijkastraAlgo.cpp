//
// Created by MANISH YADAV on 03/08/20.
//


#include<iostream>
#include<vector>
#include<climits>
#include<queue>
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


class DiPair{
public: int v;
    int c;
    string p;

    bool operator>(const DiPair& other) const
    {
        return this->c > other.c;
    }
    bool operator<(const DiPair& other) const
    {
        return this->c < other.c;
    }
    DiPair(int v,int c ,string p)
    {
     this->v=v;
     this->c=c;
     this->p=p;

    }
    DiPair()
    {
    }

};

void Dijkastra(int s)
{

    priority_queue< DiPair,vector<DiPair>,greater<DiPair>> pq;

    DiPair rtp(s,0,to_string(s));

    pq.push(rtp);

    vector<bool> visited(graph.size(),false);

    while(!pq.empty())
    {
        DiPair rem=pq.top();
        pq.pop();

        if(visited[rem.v]==true)
        {
            continue;
        }

        cout<<rem.v<<"@ "<<rem.c<<"via "<<rem.p<<endl;

        visited[rem.v]=true;

        for(int i=0;i<graph[rem.v].size();i++)
        {
            Edge ne=graph[rem.v][i];

            if(visited[ne.nbr]==false)
            {
                DiPair np(ne.nbr,rem.c+ne.wt,rem.p+to_string(ne.nbr));
                pq.push(np);
            }


        }


    }




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
    //addEdge(2,5,5);

    //display();
    cout<<endl;
    //vector<bool> visited(7,false);

    Dijkastra(0);





    return 0;
}