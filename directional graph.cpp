#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v[100];
    int i,j,x,y,n,e;
    cin>>n>>e;
    for(i=1;i<=e;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
    }
    for(i=1;i<=n;i++)
    {
          cout<<"Node "<<i<<": ";
        for(j=0;j<v[i].size();j++)
        {
          cout<<v[i][j]<<" ";
        }
          cout<<endl;
    }

}
