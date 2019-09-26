#include<iostream>

using namespace std;

int main()
{
	int n, m=100, ans=0;
	for(int i=0; i<7; i++)
	{
		cin>>n;
		if(n%2)
		{
			ans+=n;
			m=m>n?n:m;
		}
	}
	if(ans==0) cout<<"-1";
	else cout<<ans<<endl<<m;
	return 0;
}
