#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector <int> v;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int value;
		cin>>value;
		v.push_back(value);
	}
	int d,m,count=0;
	cin>>d>>m;
	for(int i=0;i<n-m+1;i++)
	{
		int sum=v[i];
		for(int j=i+1;j<i+m;j++)
		{
			sum=sum+v[j];
		}
		if(sum==d)
			count++;
	}
	cout<<count<<endl;
	return 0;
}