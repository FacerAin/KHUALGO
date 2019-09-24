#include<iostream>

using namespace std;

int main()
{
    int n, k, ans=0;
    int coin[11];
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>coin[i];
    while(k)
    {
        if(coin[n]<=k)
        {
            k-=coin[n];
            ans++;
        }
        else n--;
    }
    cout<<ans;
    return 0;
}