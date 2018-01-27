#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <long long int> v;
	for(int i=1;i<=5;i++)
	{
		long long int value;
		cin>>value;
		v.push_back(value);
	}
	sort(v.begin(),v.end());
	long long int max,min,a;
	a=accumulate(v.begin(),v.end(),0);
	
	max=a-v[0];
	min=a-v[4];
	cout<<min<<" "<<max<<endl;
	return 0;
}