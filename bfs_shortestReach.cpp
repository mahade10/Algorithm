#include<bits/stdc++.h>
using namespace std;
vector<int>edg[1007];
int vis[1007];
int lev[1007];
int n,v;
void BFS(int st)
{
    queue <int> q;
    q.push(st);
    vis[st]=1;
    lev[st]=0;

    while(!q.empty())
    {
      int f = q.front();


      q.pop();
      for(int i = 0;i<edg[f].size();i++)
      {
          v = edg[f][i];
          if(!vis[v])
          {
              vis[v]=1;
              q.push(v);
              lev[v]= lev[f]+1;


          }
      }
    }

   for(int j=1;j<=n;j++){

      if(j==st) continue;

      if(vis[j]==0)
   	  	cout<<"-1"<<" ";
        else
         cout<<lev[j]*6<<" ";
  }
  cout<<endl;

}

int main()
{
    int t,e,x,y;
    cin>>t;
    while(t--)
    {
    cin>>n>>e;
    while(e--){
        cin>>x>>y;
        edg[x].push_back(y);
        edg[y].push_back(x);
    }
        int s;
        cin>>s;
        BFS(s);
    for(int j =1;j<=n;j++)
    {
        edg[j].clear();
        vis[j]=0;
        lev[j]=0;
    }

  }
    return 0;
}
