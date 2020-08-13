#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,k;
    string s;
    cin>>t;
    while(t--)
    {
       cin>>n>>k;
       lli a[n];
       lli f[k];
       lli i;
       for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        lli sum=0;
        lli j=0,k=0;
        for (i=0;i<k;i++)
        {
            cin>>f[i];
            if (f[i]==1)
            {
                sum+=(2*a[n-1-j]);
                j++;
            }
            else if (f[i]==2)
            {
                sum+=a[k]+a[n-1-j];
                k++;
                j++;
            }
        }
        cout<<sum<<"\n";






    }



    return 0;
}

