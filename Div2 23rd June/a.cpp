#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n;
    cin>>t;
    while(t--)
    {
       cin>>n;
       if (n%4==0)
        cout<<"YES\n";
       else
        cout<<"NO\n";

    }



    return 0;
}

