#include<bits/stdc++.h>
using namespace std;

#define lli long long int

//This is wrong answer

int main()
{
    lli t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        lli i;
        //lli a,b;
        //a=1;
        //b=1;
        string a="1";
        string b="1";
        for (i=1;i<n;i++)
        {
            //cout<<"s[i]"<<s[i]<<"\n";
            if (s[i]=='0')
            {
                //a*=10;
                a+="0";
                //b*=10;
                b+="0";
            }
            if (s[i]=='1')
            {
                if (a<=b)
                {
                    //a*=10;
                    a=a+"1";
                    //b*=10;
                    b=b+"0";
                }
                else
                {
                    //a*=10;
                    a=a+"0";
                    //b*=10;
                    b=b+"1";
                }
                //cout<<a<<"\n"<<b<<"\n";
            }
            if (s[i]=='2')
            {
                if (a<=b)
                {
                    //a*=10;
                    a+="2";
                    //b*=10;
                    b+="0";
                }
                else
                {
                    //a*=10;
                    a+="0";
                    //b*=10;
                    b+="2";
                }

            }
        }
        cout<<a<<"\n"<<b<<"\n";
    }



    return 0;
}
