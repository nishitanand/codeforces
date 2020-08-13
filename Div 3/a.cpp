#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n;
    string b,a;
    cin>>t;
    while(t--)
    {
        cin>>b;
        lli n=b.length();
        lli i;
        cout<<b[0];
        for (i=1;i<n;i+=2)
        {
           cout<<b[i];
        }
        cout<<"\n";

    }



    return 0;
}

