#include<bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        int c[n],d[n];
        int i;
        int mina=INT_MAX;
        int minb=INT_MAX;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            if (a[i]<mina)
                mina=a[i];
        }
        for (i=0;i<n;i++)
        {
            cin>>b[i];
            if (b[i]<minb)
                minb=b[i];
        }
        int ans=0;
        for (i=0;i<n;i++)
        {
            c[i]=a[i]-mina;
            d[i]=b[i]-minb;
            ans+=max(c[i],d[i]);
        }
        cout<<ans<<"\n";





    }



    return 0;
}
