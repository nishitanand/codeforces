#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    lli t,n;
    string s;
    cin>>t;
    while(t--)
    {
       cin>>n;
       cin>>s;
       lli i;
       lli count1=0,count0=0;
       lli f1=0,f0=0;
       for (i=1;i<n;i++)
       {
           if ((s[i-1]=='1')&&(s[i]=='0'))
           {
               count1=0;
               count0=1;
               f0+=count0;
               i++;
               while(s[i]=='0')
               {
                   i++;
               }
           }
           if ((s[i-1]=='0')&&(s[i]=='1'))
           {
               i++;
               while(s[i]=='1')
               {
                   i++;
                   count1++;
               }
               if (s[i]=='0')
                   {
                       count1=0;
                   }
                else if (s[i]==NULL)
                {
                    f1+=count1;
                }
           }
           if ((s[i-1]=='1')&&(s[i]=='1'))
           {
               i++;
               while(s[i]=='1')
               {
                   i++;
                   count1++;
               }
               if (s[i]=='0')
                   {
                       count1=0;
                   }
                else if (s[i]==NULL)
                {
                    f1+=count1;
                }
           }
       }
       if ((s[i-1]=='0')&&(s[i]=='0'))
           {
               i++;
               while(s[i]=='0')
               {
                   i++;
                   count0++;
               }
               if (s[i]=='1')
                   {
                       count1=1;
                       f1+=count1;
                   }
                else if (s[i]==NULL)
                {
                    count0=1;
                    f0+=count0;
                }
           }



       }


    }



    return 0;
}

