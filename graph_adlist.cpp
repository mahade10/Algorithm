#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> edge[100];
    int n,e,i,j,x,y;
    cin>>n>>e;
    for(i=0;i<e;i++){
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    vector<int>::iterator it;
    for(i=1;i<=n;i++){
        cout<<"Node "<<i<<": ";
        for(it=edge[i].begin();it<edge[i].end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;

}
