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
        int n,s;
        cin>>n>>s;
        int a[n-1];
        int u,v,w;
        int sum=0;
        int i;
        for (i=0;i<n-1;i++)
        {
            cin>>u>>v>>w;
            a[i]=w;
            sum+=w;
        }
        sort(a,a+n-1, greater<int>());
        int dif=0;
        int count=0;
        while(!(sum<=s))
        {
            dif=a[0];
            a[0]/=2;
            dif-=a[0];
            sum-=dif;
            count++;
            sort(a,a+n-1, greater<int>());
        }
        cout<<count<<"\n";





    }



    return 0;
}
