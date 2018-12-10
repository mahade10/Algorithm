 #include<bits/stdc++.h>
using namespace std;
vector<int> pq[100];
int vis[100];
void dfs(int s)
{
    vis[s]=true;
    cout<<s<<" ";
    for(int i=0;i<pq[s].size();i++)
    {
        int u = pq[s][i];

        if(!vis[u])
        {
            dfs(u);
        }
    }

}
int main()
{
    int a,b,n,e,i,j,s;

    cin>>n>>e;
    while(e--)
    {
        cin>>a>>b;
        pq[a].push_back(b);

    }
    dfs(1);
}
