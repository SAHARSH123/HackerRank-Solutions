#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int x1,x2,v1,v2;
	cin>>x1>>v1>>x2>>v2;
	while(1)
	{
		if((x2+v2)>(x1+v1))
		{
			if(v2<v1)
			{
				x2=x2+v2;
				x1=x1+v1;
				continue;
			}
			else
			{
				cout<<"NO"<<endl;
				break;
			}
		}
		if((x2+v2)<(x1+v1))
		{
			if(v2>v1)
			{
				x2=x2+v2;
				x1=x1+v1;
				continue;
			}
			else
			{
				cout<<"NO"<<endl;
				break;
			}

		}
		cout<<"YES"<<endl;
		break;
	}
	return 0;
}