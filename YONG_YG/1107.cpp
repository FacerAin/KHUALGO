
#include<iostream>

using namespace std;

int n, target, cnt, now=100;
int btn[10];

int main()
{
    cin>>target>>n;
    if(target-now>0) cnt=target-now;
    else cnt=now-target;
    for(int i=0; i<n;i++)
    {
        int m;
        cin>>m;
        btn[m]=1;
    }

}