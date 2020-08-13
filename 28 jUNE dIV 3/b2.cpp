#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t;
    lli n;
    cin>>t;
    lli flag=0;
    while(t--)
    {
        flag=0;
        //cout<<"\nt "<<t<<" ";
        cin>>n;
        lli c2=0,c3=0;
        while(n>0)
        {
            if (n%2==0)
            {
                n=n/2;
                c2++;
            }
            else if (n%3==0)
            {
                n=n/3;
                c3++;
            }
            else
            {
                if (n!=1)
                {
                    cout<<"-1\n";
                    flag=1;
                    break;
                }
                else
                {
                    flag=0;
                    break;
                }



            }

        }
        if (flag==1)
            continue;
        else
        {
            if (c2>c3)
            cout<<"-1\n";
            else
            {
                if (c2==c3)
                    cout<<c2<<"\n";
                else
                {
                    lli ans=c2;
                    c3-=c2;
                    c3*=2;
                    ans+=c3;
                    cout<<ans<<"\n";
                }

            }
        }
    }
    return 0;
}

