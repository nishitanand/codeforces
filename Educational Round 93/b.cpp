#include<bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i;
        int count=0;
        vector <int> v;
        for (i=0;i<s.length() ; i++)
        {
            count=0;
            if (s[i]=='1')
            {
                while(s[i]!='0' && i<s.length())
                {
                    count++;
                    i++;
                }
                //cout<<"count "<<count<<"\n";
                v.push_back(count);
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        int ans=0;
        /*for (i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }*/
        //cout<<"\n";
        for (i=0;i<v.size();i++)
        {
            if (i%2==0)
            {
                ans+=v[i];
            }
        }
        cout<<ans<<"\n";



    }



    return 0;
}
