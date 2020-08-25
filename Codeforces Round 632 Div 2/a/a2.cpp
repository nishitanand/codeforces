#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);
#endif
    lli t,n,m,i,j;
    int flag;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if ((n%2!=0)&&(m%2!=0))
        {
            //cout<<" CASE 1 ODD ";
            for (i=0;i<n;i++)
            {
                //cout<<" I "<<i<<" ";
                if (i%2==0)
                    flag=0;
                else
                    flag=1;
                for (j=0;j<m;j++)
                {
                    //cout<<" J "<<j<<" ";
                    if (flag==0)
                    {
                        cout<<"B";
                        flag=1;
                    }
                    else if (flag==1)
                    {
                        cout<<"W";
                        flag=0;
                    }
                }
                cout<<"\n";
            }
        }
        else
        {
            //cout<<" CASE 2 EVEN ";
            for (i=0;i<n;i++)
            {
                //cout<<" I "<<i<<" ";
                if (i%2==0)
                    flag=0;
                else
                    flag=1;
                if (i==n-1)
                    m-=2;
                for (j=0;j<m;j++)
                {
                    //cout<<" J "<<j<<" ";
                    if (flag==0)
                    {
                        cout<<"B";
                        flag=1;
                    }
                    else if (flag==1)
                    {
                        cout<<"W";
                        flag=0;
                    }
                }
                if (i!=n-1)
                    cout<<"\n";
            }
            /*flag=0;
            for (j=0;j<m-2;j++)
            {
                //cout<<" J "<<j<<" ";
                if (flag==0)
                    {
                        cout<<"B";
                        flag=1;
                    }
                else if (flag==1)
                    {
                        cout<<"W";
                        flag=0;
                    }
            }*/
            cout<<"BB\n";
        }
    }




    return 0;
}
