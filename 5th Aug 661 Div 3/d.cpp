#include<bits/stdc++.h>
using namespace std;

#define int long long int
int a[100000];
int b[100000];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        memset(b,-1,sizeof(b));
        int n;
        cin>>n;
        string s;
        cin>>s;

        int i;
        int flag=0;
        int j;
        int k=1;
        b[1]=s[0];
        a[0]=1;
        for (i=1;i<n;i++)
        {
            flag=0;
            if (s[i]!=s[i-1])
            {
                b[k]=s[i];
                a[i]=k;
            }
            if (s[i]==s[i-1])
            {
                for (j=1;b[j]!=-1;j++)
                {
                    if (b[j]!=s[i])
                    {
                        b[j]=s[i];
                        a[i]=j;
                        flag=1;
                        break;
                    }
                }
                if (flag==0)
                    {
                        a[i]=j;
                        b[j]=s[i];
                    }
            }
        }
        for (i=1;b[i]!=-1;i++);
        i--;
        cout<<i<<"\n";
        for (i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";








    }



    return 0;
}


/*
7
4
0011
6
111111
5
10101
8
01010000
4
1111
5
00000
17
01011110101000111



*/
