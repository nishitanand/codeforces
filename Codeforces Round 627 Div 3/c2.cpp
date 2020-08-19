#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,i,max,count;
    std::string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<"S"<<s<<" ";
        max=0;
        count=0;
        for ( std::string::iterator it=s.begin(); it!=s.end(); ++it)
        {
            count=0;
            if (*it=='L')
            {
                while(*it=='L')
                    {
                        count++;
                        cout<<"COUNT"<<count<<" ";
                        it++;
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
