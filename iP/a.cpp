#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map <lli,lli> m;
    lli i,x;
    for (i=1;i<=32;i++)
    {
        m.insert({i,0});
    }
    for (i=0;i<10;i++)
    {
        cin>>x;
        m[x]++;
    }
    lli n;
    cin>>n;
    while(n--)
    {
        lli count=0;
        lli s;
        for (i=0;i<6;i++)
        {
            cin>>s;
            count+=m[s];
        }
        if (count>=3)
            cout<<"Lucky\n";
        else
            cout<<"Unlucky\n";






    }



    return 0;
}

