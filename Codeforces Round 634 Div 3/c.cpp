#include<bits/stdc++.h>
using namespace std;

#define lli long long int


bool sortbys(const pair<lli,lli> &a,
        const pair<lli,lli> &b)
        {
            return (a.second < b.second);
        }


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    lli t,n,i,j,a,b,count,s;
    //char ch='a';
    //cout<<ch;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector < pair <lli,lli > > v;
        for (i=0;i<n;i++)
        {


            cin>>s;

            bool found = false;
            for(i=0;i<v.size();i++)
            {
                if (v[i]==s)
                {
                    found = true;
                    break;
                }
            }
            if(found)
            {
                elem.second++;
            }
            else
                v.push_back(make_pair(s,1));
        }
        sortbys(v.begin(),v.end());

        lli maxi=0,gmax=INT_MIN;
        lli size=v.size();
        for(i=0;i<v.size();i++)
        {
            maxi=max(min(v.second,size-(i+1)),min(v.second-1,size-i)));
            if (maxi>gmax)
                gmax=maxi;
        }
        cout<<gmax<<"\n";



        cout<<"\n";

    }



    return 0;
}
