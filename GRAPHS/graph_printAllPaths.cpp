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


int sd=INT_MAX;
string sdp;
int ld=INT_MIN;
string ldp;

int cd=INT_MAX;
string cdp;
int fd=INT_MIN;
string fdp;

void printceilandfloor(int s,int d, vector<bool>& visited, string psf, int dsf,int factor)
{
    if(s==d)
    {
        psf=psf+to_string(d);
        cout<<psf<<"-"<<dsf<<endl;

    if(dsf<sd)
    {
        sd=dsf;
        sdp=psf;
    }
    if(dsf>ld)
    {
        ld=dsf;
        ldp=psf;
    }

    if(dsf>factor&&dsf<cd)
    {
        cd=dsf;
        cdp=psf;
    }
    if(dsf<factor&&dsf>fd)
    {
        fd=dsf;
        fdp=psf;
    }


        return;
    }

    visited[s]=true;//Node Pre

    for(int n=0;n<graph[s].size();n++)
    {
        Edge ne=graph[s][n]; //here we are iterating over the all the objects jo padi hai s ke samne
        //in adjency list

        if(visited[ne.nbr]==false) {

            psf+=to_string(s);//achaa tareeka string pass krne ka
            printceilandfloor(ne.nbr, d, visited,psf,dsf+ne.wt,factor);
            psf.erase(psf.length()-1,1);

        }
    }
    visited[s]=false;//Node Post

    return ;

}


void printallPath(int s,int d, vector<bool>& visited, string psf, int dsf)
{
    if(s==d)
    {
        cout<<psf<<d<<"-"<<dsf<<endl;

        return;
    }

    visited[s]=true;//Node Pre

    for(int n=0;n<graph[s].size();n++)
    {
        Edge ne=graph[s][n]; //here we are iterating over the all the objects jo padi hai s ke samne
                             //in adjency list

        if(visited[ne.nbr]==false) {

            psf+=to_string(s);//achaa tareeka string pass krne ka
            printallPath(ne.nbr, d, visited,psf,dsf+ne.wt);
            psf.erase(psf.length()-1,1);

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

    //printallPath(0,6,visited,"",0);

    printceilandfloor(0,6,visited,"",0,45);

    cout<<"Smallest Distance"<<sd<<"Path->"<<sdp<<endl;
    cout<<"Largest Distance"<<ld<<"Path->"<<ldp<<endl;
    cout<<"Ceil Distance"<<cd<<"Path->"<<cdp<<endl;
    cout<<"Floor Distance"<<fd<<"Path->"<<fdp<<endl;



    return 0;
}