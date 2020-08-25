#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{

/*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w", stdout);
#endif*/
    lli n;
    cin>>n;
    lli a[n];
    lli i,j,sum2=0;
    for (i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    lli count=0;
    lli len=(n*(n+1))/2;
    //lli b[len];
	vector <lli> v;
	v[0]=a[0];
	//v.push_back(a[0]);
	if (a[0]!=0)
		count++;
    cout<<" I "<<i<<" V[I] "<<v[i]<<" COUNT "<<count<<"\n";
	//v.push_back(a[1]);
	v[1]=a[1];
	if (a[1]!=0)
		count++;
    cout<<" I "<<i<<" V[I] "<<v[i]<<" COUNT "<<count<<"\n";
	//v.push_back(a[0]+a[1]);
	v[2]=a[0]+a[1];
	if (v[2]!=0)
		count++;
    cout<<" I "<<i<<" V[I] "<<v[i]<<" COUNT "<<count<<"\n";
	lli sum=0,k=2;
	for (i=3;i<len;i++)
	{
		v.push_back(a[k]);
		k++;
		if (a[k]!=0)
			count++;
        cout<<" I "<<i<<" V[I] "<<v[i]<<" COUNT "<<count<<"\n";
		sum=v[i-1]+v[i-2];
		v.push_back(sum);
		i++;
		if (sum!=0)
			count++;
        cout<<" I "<<i<<" V[I] "<<v[i]<<" COUNT "<<count<<"\n";
		for (j=1;j<=k-2;j++)
		{
			sum2=v[i]-v[i-((j+1)*2)];
			v.push_back(sum2);
			j++;
			if (sum2!=0)
				count++;
            cout<<" I "<<i<<" V[I] "<<v[i]<<" COUNT "<<count<<"\n";
		}
	}
	cout<<" ANS "<<count<<"\n";
	for (i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
