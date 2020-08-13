#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli i;
        lli a2[n+1];
        lli a[2*n+1];
        a2[0]=-1;
        a[0]=-1;
        vector <lli> v;
        for (i=1;i<=2*n;i++)
        {
            cin>>a[i];
            if (i<=n)
                a2[i]=-1;
        }
        for (i=1;i<=2*n;i++)
        {
            if (a2[a[i]]==-1)
            {
                a2[a[i]]=1;
                v.push_back(a[i]);
                lli k=a[i];
                lli j=i+1;
                while(a[j]!=k)
                {
                    if (a2[a[j]]==-1)
                    {
                        a2[a[j]]=1;
                        v.push_back(a[j]);
                    }
                    j++;
                }
            }
        }
        for (auto it: v)
        {
            cout<<it<<" ";
        }
        cout<<"\n";









    }



    return 0;
}
