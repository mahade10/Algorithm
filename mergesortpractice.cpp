#include<bits/stdc++.h>
using namespace std;

void Merge(int *a,int l,int h,int mid)
{
    int i,j,k,temp[h-l+1];
    i=l;
    j=mid+1;
    k=0;

    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[k]=a[i];
            k++;
            i++;
    }
    while(j<=h)
    {
        temp[k]=a[j];
            k++;
            j++;
    }
    for(i=l;i<=h;i++)
    {
        a[i]=temp[i-l];
    }
}
void mergesort(int *a,int l,int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        Merge(a,l,h,mid);
    }
}
int main()
{
    int n,i,j,k;
    cin>>n;
    int ar[n];
    for(int i = 0;i < n;i ++)
    {
        cin>>ar[i];
    }
    mergesort(ar,0,n-1);
    for(i=0;i<n;i++)
    {
       cout<<ar[i]<<" ";
    }

}
