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

                lli dif=big-sm;
                ans+=dif;
                sm-=dif;
                sm*=2;
                sm/=3;
                ans+=sm;
            }
        }
        cout<<ans<<"\n";
    }



    return 0;
}
