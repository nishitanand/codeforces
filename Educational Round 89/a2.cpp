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
        if (a==b)
        {
            if (a%2==0)
                ans=a/2;
            else
                ans=(a/2)+1;
        }
        else
        {
            lli sm,big;
            if (a<b)
            {
                sm=a;
                big=b;
            }
            else
            {
                sm=b;
                big=a;
            }
            if (big>=(2*sm))
            {
                ans+=sm;
            }
            else
            {
                    lli abc=sm/2;
                    sm-=abc;
                    big-=(2*abc);
                    ans+=abc;
                    abc=big/2;
                    abc+=1;
                    ans+=abc;
            }
        }
        cout<<ans<<"\n";
    }



    return 0;
}
