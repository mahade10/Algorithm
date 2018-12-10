#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100010];
int vis[100010];
long long sum=0;

void dfs(int a)
{
    int i,l=adj[a].size();
    sum+=1;
    vis[a]=1;
    for(i=0;i<l;i++)
    {
        if(vis[adj[a][i]]==0)
        {
            dfs(adj[a][i]);
        }
    }
}

int main()
{
    int i,n,m,x,y;
    cin>>n>>m;
    long long max=0;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            sum=0;
            dfs(i);
            sum-=1;
            if(sum>max) max=sum;
        }
    }
    cout<<max<<endl;
    return 0;
}
