#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> adj[100];
// or we can have cin>> n >> m -> hum user se hi puch lenge ki kitne edjes aur nodes 
int n;//  no of edjes
cin>>n;
int m  = INT_MIN;// no of nodes
for(int i=0;i<n;i++)
{
    int x,y;
    cin>>x>>y;
    m = max({x,y,m}); // so sabse bda hoga connection me,utne no of nodes honge.
    adj[x].push_back(y);
    adj[y].push_back(x);
}

cout<< "adjacency list of the  graph is given by : "<<endl;
for(int i =1;i<=n;i++)
{
    cout<< i << " -> ";
    for(int x: adj[i])
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
return 0;
}