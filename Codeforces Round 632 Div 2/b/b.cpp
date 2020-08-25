#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);
#endif
    lli n;
    cin>>n;
    lli a[n];
    lli i;
    for (i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    lli len=(n*(n+1))/2;
    //lli b[len];
	vector <lli> v;
	v.push_back(a[0]);
	v.push_back(a[1]);
	v.push_back(a[0]+a[1]);
	lli sum,k=2;
	int flag=0;
	int flag2=0;
	for (i=3;i<len;i++)
	{
		
		v.push_back(a[k]);
		k++;
		sum=v[i-1]+v[i-2];
			if (sum==0)
			{
				cout<<"NO\n";
				break;
				flag=1;
			}
			else
			{
				v.push_back(sum);
				i++;
			}
		for (j=1;j<=k-2;j++)
		{
			sum2=v[i]-v[i-((j+1)*2)];
			if (sum2==0)
			{
				cout<<"NO\n";
				break;
				flag2=1;
			}
			else
			{
				v.push_back(sum2);
				i++;
			}
		}
		if (flag2==1)
			break;



	}
	if (flag==0)
		cout<<"YES\n";


	return 0;
}