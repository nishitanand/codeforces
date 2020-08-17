#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        lli ans=b-(a%b);
        if (a%b==0)
            ans=0;
        cout<<ans<<"\n";
    }



    return 0;
}
