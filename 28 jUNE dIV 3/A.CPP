#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,x,y,n,k;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        k=n/x;
        k*=x;
        if ((n-k)<y)
            k=k-x+y;
        else
            k+=y;
        cout<<k<<"\n";


    }



    return 0;
}

