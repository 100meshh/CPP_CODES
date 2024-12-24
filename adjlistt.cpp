#include<bits/stdc++.h>
using namespace std;
int main()
{
  int vertex,edges;
  cout<<"enter vertex and edges:";
  cin>>vertex>>edges;
  cout<<"enter paths:";
  vector<int>adjlist[vertex];
  for(int i=0;i<edges;i++)
  {
    int u,v;
    cin>>u>>v;
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
  }
//   print adjlist
for(int i=0;i<vertex;i++)
{
    cout<<"i"<<"->";
    for(int j=0;j<adjlist[i].size();j++)
    {
        cout<<adjlist[i][j]<<" ";
    }
    cout<<endl;
}
}