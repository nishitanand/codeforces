#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,i,max,count;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<"S"<<s<<" ";
        max=0;
        count=0;
        for(i=0;s.end();i++)
        {
            count=0;
            if (s[i]=='L')
            {
                while(s[i]=='L')
                    {
                        count++;
                        cout<<"COUNT"<<count<<" ";
                        i++;
                    }
                if (count>max)
                    max=count;
            }
        }
        cout<<"MAX"<<max<<" ";
        max+=1;
        cout<<max<<endl;
    }





    return 0;
}
