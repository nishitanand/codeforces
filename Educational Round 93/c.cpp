#include<bits/stdc++.h>
using namespace std;

#define int long long int

//int sz=101;
int dp[1001][1001];

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

        memset(dp,-1,sizeof(dp));
        string s;
        cin>>s;
        int size=s.length();
        int count=0;
        if (s[0]=='1')
            count++;
        for (i=0;i<size;i++)
        {
            char z=s[i];
            int a=z-'0';
            //int a=(int)z;
            if (i==0)
                dp[0][i]=a;
            else
            {
                dp[0][i]=dp[0][i-1]+a;
                if (dp[0][i] == (i+1))
                {
                    count++;
                }
            }

        }
        int j;
        for (i=1;i<size;i++)
        {
            for (j=i;j<size;j++)
            {
                dp[i][j]=dp[0][j]-dp[0][i-1];
                //check if this dp is equal to size
                if (dp[i][j] == (j+1-i))
                {
                    count++;
                }
            }
        }
        cout<<count<<"\n";



    }



    return 0;
}
