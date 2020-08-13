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
        int a[101];
        memset(a,0,sizeof(a));
        int i,s;
        int max=INT_MIN;
        for (i=0;i<n;i++)
        {
            cin>>s;
            if (s>max)
                max=s;
            a[s]++;
        }
        if (n==1)
        {
            cout<<"YES\n";
            continue;
        }
        int flag=0;
        for (i=1;i<=max;i++)
        {
            if (a[i]>0 && flag==0)
                {
                    flag=1;
                    continue;
                }
            if (flag==1 && a[i]==0)
                {
                    flag=2;
                    continue;
                }
            if (flag==2 && a[i]>0)
            {
                cout<<"NO\n";
                flag=3;
                break;
            }
        }
        if (flag!=3)
            cout<<"YES\n";







    }



    return 0;
}
