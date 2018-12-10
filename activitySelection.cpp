#include<bits/stdc++.h>
using namespace std;
pair < int, int> a[100000];
int main()
{
    int i,j,n,t,c=0;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
    scanf("%d",&n);

    for(i = 0; i <n; i++)
   {
        scanf("%d %d",&a[i].second,&a[i].first);
   }
    sort(a,a+n);

    int last = -1;
    for(i=0;i<n;i++)
    {
        if(a[i].second>=last){

            last = a[i].first;
            c++;
        }

    }
    printf("%d\n",c);
    c=0;
   }
    return 0;
}


