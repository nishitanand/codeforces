#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define inf 1e18

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
        lli sz,i;
        cin>>s;
        sz=s.size();
        lli res = 0;
        lli init,cur;
        bool ok;
        for (init = 0; init<=1e6; init++)
        {
            cur = init;
            ok = true;
            for (i = 0; i<sz;i++)
            {
                res += 1;
                if (s[i] == '+')
                    cur += 1;
                else
                    cur -= 1;
                if (cur < 0)
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                break;
        }
        cout<<res<<"\n";
    }
    return 0;
}

