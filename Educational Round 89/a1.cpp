#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        lli ans=0;
        if (((a==0)||(b==0))||((a==1)&&(b==1)))
            ans=0;
        else
        {
            if (a>=(2*b))
            {
                ans+=b;
            }
            else if (b>=(2*a))
            {
                ans+=a;
            }
            else
            {
                while(!(((a==0)||(b==0))||((a==1)&&(b==1))))
                if (a<=b)
                {
                    b-=2;
                    a-=1;
                    ans+=1;
                }
                else
                {
                    a-=2;
                    b-=1;
                    ans+=1;
                }

            }

        }
        cout<<ans<<"\n";
    }



    return 0;
}
