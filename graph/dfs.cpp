#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];


void dfs(int curr) 
{
    // preorder 
    vis[curr] = 1;
    cout<< curr <<" ";

    // inorder
    vector<int> :: iterator it;
    for(it = adj[curr].begin(); it != adj[curr].end();it++)
    {
        if(vis[*it]);
        else
        {
            dfs(*it);
        }
    }
}




int main(){
// inputing-------------
for(int i=0;i<N;i++)
{
    vis[i] = 0;
}
cout<<"input no of  nodes nd edges(m) : ";
int n,m;
cin>>n>>m;

int x,y;
for(int i=0;i<m;i++)
{
    cin>>x>>y;

    adj[x].push_back(y);
    adj[y].push_back(x);

}
// inputing over ------------


dfs(1); // 1 ko root node maan liya


return 0;
}