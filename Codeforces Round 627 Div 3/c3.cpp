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
        //cout<<"S"<<s<<" ";
        max=0;
        count=0;
        //cout<<s.length();
        for(i=0;i<s.length();i++)
        {
            //cout<<"I"<<i<<" ";
            count=0;
            if (s[i]=='L')
            {
                while(s[i]=='L')
                    {
                        count++;
                        //cout<<"COUNT"<<count<<" ";
                        i++;
                    }
                if (count>max)
                    max=count;
                //cout<<"MAAX"<<max<<" ";
            }
        }
        //cout<<"MAX"<<max<<" ";
        max+=1;
        cout<<max<<endl;
    }





    return 0;
}
