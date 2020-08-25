#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli t,a,b,c,d,x,y,x1,y1,x2,y2;
    cin>>t;
    while(t--)
    {

        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        lli lr=abs(a-b);
        lli ud=abs(c-d);
        //cout<<"LR "<<lr<<"UD "<<ud<<" ";
        x1-=x;
        x2-=x;
        y1-=y;
        y2-=y;
        //cout<<" x1 "<<x1<<" x2 "<<x2<<" y1 "<<y1<<" y2 "<<y2<<" ";
        if (((x1==0)&&(x2==0))&&((y1==0)&&(y2==0)))
        {
            cout<<"NO\n";
            continue;
        }



            if (((x1==0)&&(x2==0))&&(lr!=0))
            {
                cout<<"NO\n";
                continue;
            }

            else if (((y1==0)&&(y2==0))&&(ud!=0))
            {
                cout<<"NO\n";
                continue;
            }

        if (((x1==0)&&(a!=0))&&(b==0))
            cout<<"NO\n";
        else if (((x2==0)&&(b!=0))&&(a==0))
            cout<<"NO\n";
        else if (((y1==0)&&(c!=0))&&(d==0))
            cout<<"NO\n";
        else if (((y2==0)&&(d!=0))&&(c==0))
            cout<<"NO\n";
        else
        {
            if (x1==0)
            x1=INT_MAX;
        if (x2==0)
            x2=INT_MAX;
        if (y1==0)
            y1=INT_MAX;
        if (y2==0)
            y2=INT_MAX;
        //x1=abs(x1)
        lli lrmin=min(abs(x1),abs(x2));
        lli udmin=min(abs(y1),abs(y2));
        //cout<<"lrmin "<<lrmin<<" udmin "<<udmin<<" ";
        if ((lr>lrmin)||(ud>udmin))
            cout<<"NO\n";
        else
            cout<<"YES\n";
        }


    }





    return 0;
}
