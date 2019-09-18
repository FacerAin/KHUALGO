#include <iostream>
using namespace std;

int t,n,m;
long long dp[30][30];

int main() {
	for(int i=1; i<30; i++) dp[1][i]=i;
	for(int i=2; i<30; i++)
		for(int j=1; j<30; j++)
		{
			if(i>j) dp[i][j]=0;
			else if(i==j) dp[i][j]=1;
			else dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
		}
	
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>n>>m;
		cout<<dp[n][m]<<endl;
	}
	return 0;
}
