#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int number;
		cin>>number;
		if(number<38)
			cout<<number<<endl;
		else
		{
			if(number%5>=3)
				number=number+(5-(number%5));
				cout<<number<<endl;
		}
	}
	return 0;
}