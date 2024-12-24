#include<bits/stdc++.h>
using namespace std;
int main()
{
    int edges,vertex;
    cout<<"enter no. of edges and vertex :";
    cin>>vertex>>edges;
    int u,v;
    vector<vector<bool>>adjmat(vertex,vector<bool>(vertex,0));
    cout<<"enter undirected paths :";
    for (int i=0;i<edges;i++)
    {
        cin>>u>>v;
        adjmat[u][v]=1;
        adjmat[v][u]=1;
    }
    // print
    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        cout<<adjmat[i][j];
        cout<<endl;
    }
}