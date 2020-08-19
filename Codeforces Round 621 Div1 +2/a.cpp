#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,d,i,inp,pile1,dist,otherp,sum,j,totalsum,count1;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        lli a[n];
        for (i=0;i<n;i++)
        {
            cin>>inp;
            a[i]=inp;
        }
        pile1=a[0];
        sum=0;
        totalsum=0;
        count1=pile1;
        for (i=1;i<n;i++)
        {
            dist=i;
            otherp=a[i];
            for (j=1;j<=otherp;j++)
            {
                sum=dist;
                totalsum+=sum;
                if (totalsum>d)
                    break;
                count1++;

            }
        }
        cout<<count1<<"\n";
    }



    return 0;
}
