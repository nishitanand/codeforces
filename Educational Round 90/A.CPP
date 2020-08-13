#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t;
    long double a,b,c,cb;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cb=c/b;
        if (a==cb)
        {
            lli d=(b*2)-1;
            std::cout << std::fixed;
            std::cout << (lli)d;
            cout<<" -1\n";
        }
        else if (a<cb)
        {
            cout<<"1 -1\n";
        }
        else if (a>cb)
        {
            if (a>c)
            {
                cout<<"-1 1\n";
            }
            else if (a==c)
            {
                cout<<"-1 ";
                std::cout << std::fixed;
                std::cout << (lli)b;
                cout<<"\n";
            }
            else if (a<c)
            {
                cout<<"1 2\n";
            }
        }
    }



    return 0;
}

