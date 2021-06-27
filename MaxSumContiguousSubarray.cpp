#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    long long int presum[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        {
            presum[i]=a[i];
        }
        else
        {
            presum[i]=a[i]+presum[i-1];
        }
    }
    long long int ans=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            long long int sum=0;
            if(i==0)
            {
                sum=presum[j];
            }
            else
            {
                sum=presum[j]-presum[i-1];
            }
            ans=max(ans,sum);
        }
    }
    cout<<ans<<endl;
    return 0;
}