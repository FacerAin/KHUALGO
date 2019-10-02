#include<iostream>

using namespace std;

int main()
{
    int t, n, k;
    int arr[15][15]={0,};

    for(int i=1; i<15; i++) arr[0][i]=i;
    for(int i=1; i<15; i++)
        for(int j=1; j<15; j++)
            for(int k=1; k<=j; k++) arr[i][j]+=arr[i-1][k];

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n>>k;
        printf("%d\n",arr[n][k]);
    }
}