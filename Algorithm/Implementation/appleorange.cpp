#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	int apple=0,orange=0;
	vector <int> v;
	for(int i=1;i<=e;i++)
	{
		int value;
		cin>>value;
		
		v.push_back(value);
		if((c+v[i-1])>=a && (c+v[i-1])<=b)
			apple++;
	}
	v.clear();
	for(int i=1;i<=f;i++)
	{
		int value;
		cin>>value;
		
		v.push_back(value);
		if((d+v[i-1])>=a && (d+v[i-1])<=b)
			orange++;
	}
	cout<<apple<<endl;
	cout<<orange<<endl;
	return 0;

}
