#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int ar[n+1],sum = 0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
     for(i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    if(sum%2!=0)
    {
        cout<<"NO\n";
    }
    else
    {
        sum = sum/2;
        bool dp[n+1][sum+1];
        for(i=0;i<=sum;i++)
        {
            dp[0][i]=false;
        }
        for(i=0;i<=n;i++)
        {
            dp[i][0]=true;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=sum;j++)
            {
                if(j<ar[i-1])
                {
                    dp[i][j]= dp[i-1][j];
                }
                else
                {
                    dp[i][j]= dp[i-1][j]||dp[i-1][j-ar[i-1]];
                }
            }
        }
         if(dp[n][sum])
            cout<<"YES\n";
        else{
            cout<<"NO\n";
        }

    }

  }
  return 0;

}
