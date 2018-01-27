#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,count,ans=0;
	cin>>n>>m;
	vector <int> v1;
	vector <int> v2;
	vector <int> v3;
	vector <int> :: iterator l,j;
	for(int i=0;i<n;i++)
	{
		int value;
		cin>>value;
		v1.push_back(value);

	}

	for(int i=0;i<m;i++)
	{
		int value;
		cin>>value;
		v2.push_back(value);

	}
	int max,min;
	max=*max_element(v1.begin(),v1.end());
	min=*min_element(v2.begin(),v2.end());
	
	
	for(int i=max;i<=min;i++)
	{
		
		v3.push_back(i);
	}
	
	for(l=v3.begin();l!=v3.end();l++)
	{
		count=-1;
		
		for(j=v1.begin();j!=v1.end();j++)
		{
			if(*l % *j ==0)
				continue;
			else
				count=0;
		}

		for(j=v2.begin();j!=v2.end();j++)
		{
			if(*j % *l ==0)
				continue;
			else
				count=0;
		}
		if(count==-1)
			ans++;
	}
	cout<<ans<<endl;
	return 0;

}