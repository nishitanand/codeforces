#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t;
    long double n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long double ans=log10(n)/log10(3);
        cout<<"ans "<<ans<<" yes ";
        double intpart;
        if (modf(ans,&intpart) == 0.0)
            cout<<(ans*2)<<"\n";
        else
            cout<<"-1\n";


    }



    return 0;
}

