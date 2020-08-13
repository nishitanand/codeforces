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
        lli a[n];
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        lli dir=0;
        lli flag=0;
        for (i=n-2;i>=0;i--)
        {
            if (a[i]>=a[i+1] && flag==0)
            {
                dir=1;
                continue;
            }
            else if (a[i]<=a[i+1])
            {
                dir=-1;
                flag=1;
                continue;
            }
            else if (a[i]>=a[i+1] && flag==1)
                break;
        }
        i++;
        cout<<i<<"\n";





    }



    return 0;
}
