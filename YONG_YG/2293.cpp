#include<iostream>

using namespace std;

int dp[10050]={1,}, coin[100];
int n,k;

int main()
{
    cin>>n>>k;
    for(int i=0; i<n; i++) cin>>coin[i];
    for(int i=0; i<n; i++)
        for(int j=coin[i]; j<=k; j++)
            dp[j]+=dp[j-coin[i]];
    cout<<dp[k];
    return 0;
}