#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli count;
lli final;
lli n;




lli func(int st,int n,int count,int final,string &s)
        {
            char ch=(char)(97+count);
            cout<<ch<<" ";
            lli k=n/2;
            if ((k-st)==2)
            {
                if ((s[st]==ch && s[st+1]==(char)(ch+1) ) || ((s[st+1]==ch && s[st]==(char)(ch+1) )))
                    return final;
                else if ((s[st]==ch)||(s[st+1]==ch))
                {
                    final++;
                    return final;
                }
                else
                {
                    final+=2;
                    return final;
                }
            }
            else
            {
                lli lc=0,rc=0;
                lli i;
                for (i=st;i<k;k++)
                    {
                        if (s[i]==ch)
                            lc++;
                    }
                for (i=k;i<(2*k);k++)
                    {
                        if (s[i]==ch)
                            rc++;
                    }
                if (lc>=rc)
                {
                    final+=k-lc;
                    func(k,n,count+1,final,s);
                }
                else if (rc>lc)
                {
                    final+=k-rc;
                    func(0,k,count+1,final,s);
                }

            }

        }



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;

        lli ans=func(0,n,0,0,s);
        cout<<ans<<"\n";









    }



    return 0;
}



