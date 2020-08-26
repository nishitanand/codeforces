#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    lli t,n,i,j,a,b,count;
    char ch='a';
    //cout<<ch;
    cin>>t;
    while(t--)
    {
        count=0;
        ch='a';
        cin>>n>>a>>b;
        lli ans=a/b;
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=ans && i<=n ;j++)
            {
                cout<<ch;
                i++;
            }
            ch++;
            count++;
            i--;
            if ((count==b)&&(a!=b))
            {
                count=0;
                ch='a';
            }
        }
        cout<<"\n";

    }



    return 0;
}
