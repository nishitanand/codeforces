#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli n,i,j,count;
    cin>>n;
    lli a[n];
    lli b[n];
    for (i=0;i<n;i++)
        cin>>a[i];
    for (i=0;i<n;i++)
        cin>>b[i];
    count=0;
    lli diff[n];
    lli diff2[n];
    for (i=0;i<n;i++)
    {
        diff[i]=a[i]-b[i];
    }
    for (i=0;i<n;i++)
    {
        diff2[i]=b[i]-a[i];
    }
    //sort(diff2,rbegin(),rend());
    sort(diff,diff+n);
    sort(diff2,diff2+n);
    lli k=0;
    lli ans=0;
    lli flag=0;
    for(i=0;i<n;i++)
    {
        cout<<diff[i]<<" ";
        flag=0;
        for(j=k;diff2[j]<diff[i];j++)
        {
            cout<<diff2[j]<<" ";
            count++;
            cout<<"COUNT"<<count<<" ";
            flag=1;
        }
        ans+=count;
        k=j;
    }





    cout<<count;


    return 0;
}
