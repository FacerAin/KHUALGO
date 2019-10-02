#include<iostream>

using namespace std;

int main()
{
    int ans=1,t,i=1;
    cin>>t;
    while(ans<t)
        ans+=((i++)*6);
    cout<<i;
    return 0;
}