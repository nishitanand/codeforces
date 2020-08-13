#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,a,b,n;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        lli count=0;
        while(!((a>n)||(b>n)))
        {
            if (a<=b)
                a+=b;
            else
                b+=a;
            count++;
        }
        cout<<count<<"\n";

    }



    return 0;
}

