#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

int main()
{
// visited array ko zero se initalized ker dete h 
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
// inputing khtm---
queue<int> q;
q.push(1);
vis[1] = true;



while(!q.empty())
{
    int curr = q.front();
    q.pop();
    cout<<curr<<" ";

    vector<int> :: iterator it;
    for(it = adj[curr].begin(); it != adj[curr].end();it++)
    {
        if(!vis[*it])
        {
            vis[*it] = 1;
            q.push(*it);
        }
    }
}
return 0;
}