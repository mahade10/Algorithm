#include<bits/stdc++.h>
using namespace std;
vector<int>edg[1007];
int vis[1007];
int lev[1007];
int n,v;
 int Count = 0;
void BFS(int st)
{
    queue <int> q;
    q.push(st);
    vis[st]=1;


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
          }
          else
          {
              Count =1;
              break;
          }

      }
      if(Count==1)
        break;
    }
    if(Count==0)
        cout<<"yes\n";
    else
        cout<<"no\n";

}

int main()
{
    int e,x,y;
    cin>>n>>e;
    while(e--){
        cin>>x>>y;
        edg[x].push_back(y);

    }
        BFS(x);
    return 0;
}
