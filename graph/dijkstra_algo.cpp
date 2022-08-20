#include<bits/stdc++.h>
using namespace std;
const int inf = 1e7;// defining infinty
int main(){
int n,m;// n -> vertices and m -> edjes
cin>>n>>m;
vector<int> dist(n+1,inf); // defing all distance by infinty intially
vector<vector<pair<int,int>>> graph(n+1);// weighted graph h isliye
for(int i = 0;i<m;i++)
{
    int u,v,w;
    cin>>u>>v>>w;// intial final weight
    graph[u].push_back({v,w});
    graph[v].push_back({u,w});// agr directed graph h to is line to hata dete,rest all are same
}
int source;
cin>>source;
dist[source] = 0;

set<pair<int,int>> s;
//set ka order : {weight,vertex}
s.insert({0,source});// source ka distance to 0 hi rahega
while(!s.empty())
{
    auto x = *(s.begin()); // set ka samllest distance wla element aa gya h 
    s.erase(x);
    for(auto it : graph[x.second]){// x hai to set se,so x ka second matlab 
        if(dist[it.first] > dist[x.second] + it.second){
            s.erase({dist[it.first],it.first});
            dist[it.first] = dist[x.second] + it.second;
            s.insert({dist[it.first],it.first});
            }
    }
}
for(int i=1;i<=n;i++)
{
    if(dist[i]<inf)
    {
        cout<<dist[i]<<" ";
    }
    else
    {
        cout<<-1<<" ";
    }
}
return 0;
}