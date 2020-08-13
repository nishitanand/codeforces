#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n,k;
    string s;
    cin>>t;
    while(t--)
    {
       cin>>n>>k;
       lli a[n];
       lli f[k];
       lli i;
       for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        /*for (i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }*/
        lli sum=0;
        lli j=0,r=0;
        lli tr;
        for (i=0;i<k;i++)
        {
            cin>>tr;
            if (tr==1)
            {
                //cout<<sum<<" ";
                sum+=(2*a[n-1-j]);
                j++;
            }
            else
            {
                a[i]=tr;
            }
            /*{
                //cout<<sum<<" ";
                sum+=a[r]+a[n-1-j];
                j++;
                r+=f[i]-1;
            }
            cout<<"F[i]"<<f[i]<<"R"<<r<<"J"<<j<<"SUM"<<sum<<"\n";
            */
        }
        lli crt=j;
        for (i=0;i<k-crt;i++)
        {
            sum+=a[r]+a[n-1-j];
            j++;
            r+=f[i]-1;
        }
        /*if ((r+j)!=n)
            cout<<"error";
        */
        cout<<sum<<"\n";






    }



    return 0;
}


/*
1
4 2
1 13 7 17
1 3

*/




/*

1
8
3
3
2
-1
10
-2
7
5
2
1
4
3




*/
