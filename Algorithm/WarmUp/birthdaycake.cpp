#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	vector <long long> v;
	for(i=1;i<=n;i++)
	{
		long long value;
		cin>>value;
		v.push_back(value);

	}

	long long max=*max_element(v.begin(), v.end());
	long long c=count(v.begin(), v.end(), max);
	cout<<c<<endl;
}