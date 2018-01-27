#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	vector <int> v;
	int positive=0,zero=0,negative=0;
	for(int i=0;i<t;i++)
	{	
		int value;
		cin>>value;
		v.push_back(value);
		if(v[i]==0)
			zero++;
		if(v[i]<0)
			negative++;
		if(v[i]>0)
			positive++;

	}

	
	double a,b,c;
	a=(double)zero/t;
	b=(double)positive/t;
	c=(double)negative/t;
	cout<<fixed<<setprecision(6)<<b<<endl;
	cout<<fixed<<setprecision(6)<<c<<endl;
	cout<<fixed<<setprecision(6)<<a<<endl;
	return 0;	
}