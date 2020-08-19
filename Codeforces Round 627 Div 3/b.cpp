#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,i,dig,dig1,j,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        flag=0;
        for(i=0;i<n;i++)
        {
            dig=a[i];
            dig1=a[i+1];
            for(j=i+2;j<n;j++)
            {
                if (a[j]==dig)
                {
                    cout<<"YES\n";
                    flag=1;
                    break;
                }
            }
            if (flag==1)
                break;

        }
        if (flag==0)
        {
            cout<<"NO\n";
        }




    }





    return 0;
}
