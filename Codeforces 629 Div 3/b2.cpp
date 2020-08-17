#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        float sq=(8*k)+1;
        sq=sqrt(sq);
        //cout<<sq;
        lli an=(int)sq;
        //cout<<" "<<an;
        an+=1;
        an-=1;
        an/=2;
        lli ans=((an*(an+1))/2);
        lli one=an+1;
        lli i;
        lli two=(an-(ans-k));
        string s="";
        lli lp=n-one;
        for (i=0;i<lp;i++)
            s=s+"a";
        s=s+"b";
        lli ls=n-two;
        for (i=lp+1;i<ls;i++)
            s=s+"a";
        s=s+"b";
        for(i=ls+1;i<n;i++)
            s=s+"a";
        cout<<s<<"\n";
    }



    return 0;
}
