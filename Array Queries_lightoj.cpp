//Segment Tree
#include<bits/stdc++.h>
#define INF INT_MAX
#define MX 100004
using namespace std;

int ar[MX],tree [MX*3];


void initial(int node, int source, int ends)
{
    if (source == ends)
    {
        tree[node] = ar[source];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (source + ends) / 2;

    initial(Left, source, mid);
    initial(Right, mid + 1, ends);
    tree[node] = min(tree[Left] , tree[Right]);
}

int  query(int node ,int source,int ends,int i,int j)
{
    if(i>ends || j<source)
    {
        return INF;
    }
    if(source>=i && ends<=j)
    {
        return tree[node];
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (source + ends) / 2;

    int p1 = query(Left, source, mid,i,j);
    int p2 = query(Right, mid + 1, ends,i,j);
    return min(p1,p2);
}

int main()
{
    freopen("array_query.txt","r",stdin);
    int t,n,q,i,j,a,b;
    cin>>t;
    for(int test =1 ;test<=t;test++)
    {
         scanf("%d %d",&n, &q);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ar[i]);
        }
        initial(1,1,n);
        printf("Case %d:\n",test);
        while(q--)
        {
            scanf("%d %d",&i, &j);
            printf("%d\n",query(1, 1, n, i, j));
        }
    }
    return 0;
}
