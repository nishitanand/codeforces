#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli n,i,j,diff,diff2,count;
    cin>>n;
    lli a[n];
    lli b[n];
    for (i=0;i<n;i++)
        cin>>a[i];
    for (i=0;i<n;i++)
        cin>>b[i];
    count=0;
    for (i=0;i<n;i++)
    {
        diff=a[i]-b[i];
        //cout<<"DIFF"<<diff<<" ";
        for(j=i+1;j<n;j++)
        {
            diff2=b[j]-a[j];
            //cout<<"DIFF2"<<diff2<<" ";
            if (diff>diff2)
                count++;
            //cout<<"COUNT"<<count<<" ";
        }



    }

    cout<<count;


    return 0;
}
