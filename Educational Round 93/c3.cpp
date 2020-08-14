#include<bits/stdc++.h>
using namespace std;

#define int long long int

//int sz=101;
//int dp[1001][1001];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        int j;
        int abc=0;
        int dp[n];
        memset(dp,-1,sizeof(dp));
        string s;
        cin>>s;
        int size=s.length();
        int count=0;
        if (s[0]=='1')
            {count++;} //cout<<" s[0]=1\n ";
        for (i=0;i<size;i++)
        {
            char z=s[i];
            int a=z-'0';
            //int a=(int)z;
            if (i==0)
                dp[i]=a;
            else
            {
                dp[i]=dp[i-1]+a;
                if (dp[i] == (i+1))
                {
                    count++;
                    //cout<<" dp[i] "<<dp[i]<<" i "<<i<<"\n";
                }
                for (j=1;j<=i;j++)
                {
                    abc=dp[i]-dp[j-1];
                    ////////cout<<"i "<<i<<" j "<<j<<" abc "<<abc<<"\n";
                    //check if this dp is equal to size
                    if (abc == (i+1-j))
                    {
                        count++;
                        ////////cout<<" aaaabc "<<abc<<"\n";
                    }
                }

            }

        }
        /*
        for (i=0;i<n;i++)
        {
            cout<<"i "<<i<<" dp "<<dp[i]<<" ";
        }
        cout<<"\n";
        */

        cout<<count<<"\n";



    }



    return 0;
}
