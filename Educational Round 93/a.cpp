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
        int n;
        cin>>n;
        int i;
        int sum=0;
        int a[n];
        int c=0;
        int flag=0;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            if (i>1)
            {
                sum=a[0]+a[1];
                if (sum<=a[i])
                {
                    flag=1;
                    //c=a[i];
                    c=i;
                }
            }

        }
        if (flag==0)
            cout<<"-1\n";
        else
            cout<<"1 2 "<<c+1<<"\n";




    }



    return 0;
}
