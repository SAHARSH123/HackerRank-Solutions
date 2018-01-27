#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector <int> v;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int value;
		cin>>value;
		v.push_back(value);
	}
	int highest=0,lowest=0,a=v[0],b=v[0];
	for(int i=1;i<n;i++)
	{
		if(v[i]>a)
		{
			highest++;
			a=v[i];
		}
		if(v[i]<b)
		{
			lowest++;
			b=v[i];
		}
	}
	cout<<highest<<" "<<lowest<<endl;
	return 0;
}