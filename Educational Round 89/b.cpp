#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,x,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m;
        lli ans=1;
        lli l,r,l0,r0;
        lli i;
        for (i=0;i<m;i++)
        {
            cin>>l>>r;
            if (ans==1)
            {
                if ((x>=l)&&(x<=r))
                {
                    ans=r-l+1;
                    l0=l;
                    r0=r;
                }
            }
            else
            {
                if ((l<l0)&&((r<=r0)&&(r>=l0)))
                {
                    ans+=(l0-l);
                    l0=l;
                }
                else if ((r>r0)&&((l>=l0)&&(l<=r0)))
                {
                    ans+=(r-r0);
                    r0=r;
                }
                else if ((l<l0)&&(r>r0))
                {
                    ans+=(l0-l)+(r-r0);
                    r0=r;
                    l0=l;
                }
            }
        }
        cout<<ans<<"\n";
    }



    return 0;
}
