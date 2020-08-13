#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string a;
        lli i;
        lli ans=0;
        cin>>a;
        lli n=a.length();
        //lli even=0,odd=0;
        lli counter=0;
        lli zero=0;
        bool first=false;
        for (i=0;i<n;i++)
        {
            //cout<<" I "<<i<<" A[i] "<<a[i];
            if (a[i]=='1')
            {
                zero=counter;
                counter=0;

                if (zero>=1)
                {
                    if (a[0]=='0')
                    {
                        if (first==true)
                        {
                            //first=false;
                            ans+=((zero-k)/(k+1));
                        }
                        else
                        {
                            first=true;
                            ans+=(zero/(k+1));
                        }

                    }
                    else
                    {
                        ans+=((zero-k)/(k+1));
                    }
                }
                //cout<<" ANS "<<ans<<" ZERO "<<zero<<" COUNTER "<<counter;
            }
            if (a[i]=='0')
            {
                counter++;
            }

        }
        if (a[n-1]=='0')
        {
            zero=counter;
            ans+=(zero/(k+1));
        }
        if (counter==n)
        {
            ans=((counter+k)/(k+1));
        }
        cout<<ans<<"\n";

    }



    return 0;
}

