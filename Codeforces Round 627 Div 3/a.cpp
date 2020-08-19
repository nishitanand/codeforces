#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,i;
    cin>>t;
    int flag;
    while(t--)
    {
        cin>>n;
        lli a[n];
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if (n==1)
            cout<<"YES\n";
        else
            {
                    if ((a[0]%2)==0)
                {
                    flag=0;
                    for (i=1;i<n;i++)
                    {
                        if ((a[i]%2)!=0)
                            {
                                flag=1;
                                break;
                            }
                    }
                    if (flag==1)
                        cout<<"NO\n";
                    else if (flag==0)
                        cout<<"YES\n";
                }
                else if ((a[0]%2)!=0)
                {
                    flag=0;
                    for (i=1;i<n;i++)
                    {
                        if ((a[i]%2)==0)
                            {
                                flag=1;
                                break;
                            }
                    }
                    if (flag==1)
                        cout<<"NO\n";
                    else if (flag==0)
                        cout<<"YES\n";
                }
            }


    }





    return 0;
}
