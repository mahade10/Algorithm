#include<bits/stdc++.h>
#define MX  100005
#define INF INT_MAX
#define pii pair<int,int>
#define clear(x)for(int i = 0;i<MX;i++)x[i].clear();

using namespace std;
vector <int> dist;
vector <pii> adj[MX];

int dizkstra(int source,int stop)
{
    dist[source] = 0;
    priority_queue <pii,vector<pii>,greater<pii> > q;
    q.push({0,source});
    while(!q.empty())
    {
        int u = q.top().second;
        q.pop();
        for(auto c : adj[u])
        {
            int v = c.first;
            int w = c.second;
            if(dist[v]>dist[u]+w)
            {
                dist[v] = dist[u]+w;
                q.push({dist[v],v});
            }
        }
    }
    if(dist[stop] == INF)
    {
        return -1;
    }
    else
    {
        return dist[stop];
    }
}

int main()
{
    int n,m,t,i,j,a,b,c,A,B;
    cin>>t;
    while(t--)
    {
       cin>>n>>m;
       clear(adj);
       for(i = 1; i<= m; i ++)
       {
           cin>>a>>b>>c;
           adj[a].push_back({b,c});

       }
       cin>>A>>B;
       dist.assign(n+1,INF);
       int ans = dizkstra(A,B);
       if(ans != -1) printf("%d\n", ans);
        else printf("NO\n");
    }
    return 0;
}

