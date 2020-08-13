#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t;
    cin>>t;
    while(t--)
    {
        string s;
        lli sz,i,c1=0,c0=0;
        cin>>s;
        sz=s.size();
        for (i=0;i<sz;i++)
        {
            if (s[i]=='0')
                c0++;
            else if (s[i]=='1')
                c1++;
        }
        lli dif=abs(c1-c0);
        lli ans=sz-dif;
        if (ans==0)
            cout<<"NET\n";
        else
        {
            ans/=2;
            if (ans%2!=0)
                cout<<"DA\n";
            else
                cout<<"NET\n";
        }


    }



    return 0;
}

