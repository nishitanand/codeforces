#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,x,y,z,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if ( (x!=y) && ((z!=y) && (z!=x)) )
        {
            cout<<"NO\n";
        }
        else
        {
            if ((x==y) && (z==y))
            {
                cout<<"YES\n";
                cout<<x<<" "<<x<<" "<<x<<"\n";
            }
            else
            {
                if ((x==y) && (x>z))
                    {
                    cout<<"YES\n";
                    cout<<x<<" "<<z<<" "<<z<<"\n";
                    }
                else if ((x==z) && (x>y))
                    {
                    cout<<"YES\n";
                    cout<<y<<" "<<x<<" "<<y<<"\n";
                    }
                else if ((y==z) && (y>x))
                    {
                    cout<<"YES\n";
                    cout<<x<<" "<<x<<" "<<y<<"\n";
                    }
                else
                    cout<<"NO\n";
            }
        }







    }



    return 0;
}
