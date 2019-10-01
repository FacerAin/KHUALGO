#include<iostream>

using namespace std;

int a=1,b=2,c,n;

int main()
{
    cin>>n;
    if(n<2) c=1;
    else if(n==2) c=2;
    else
        for(int i=3; i<=n; i++)
        {
            c=(a+b)%15746;
            a=b;
            b=c;
        }
    cout<<c;
    return 0;
}