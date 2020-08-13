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
        lli a[n];
        lli i;
        lli even=0,odd=0;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            if (i%2==0)
            {
                if (a[i]%2!=0)
                    even++;
            }
            else if (i%2!=0)
            {
                if (a[i]%2==0)
                    odd++;
            }
        }
        if (even==odd)
        {
            cout<<even<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }

    }



    return 0;
}

