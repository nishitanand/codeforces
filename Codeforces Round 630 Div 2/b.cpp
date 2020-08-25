#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli a[n];
        lli b[n];
        lli c[n][2];
        lli i,s;
        for (i=0;i<n;i++)
        {
            cin>>s;
            a[i]=s;
            b[i]=s;
            c[i][0]=s;

        }
        sort(a,a+n);
        lli count=1;
        lli flag=0;

        c[0][1]=1;

        for (i=1;i<n;i++)
        {
            flag=0;
            for(j=0;j<i;j++)
            {
                for (k=2;k<=a[j];k++)
                {
                    if ((a[i]%k==0)&&(a[j]%k==0))
                    {
                        flag=1;
                        c[i][1]=c[j][1];
                        break;
                    }
                }
                if (flag==1)
                    break;
            }
            if (flag==0)
                count++;



        }
        cout<<"COUNT "<<count<<"\n";
        for (i=0;i<n;i++)
        {
            cout<<"NUM "<<c[i][0]<<" COLOR "<<c[i][1]<<"\n";
        }
    }


    return 0;
}
