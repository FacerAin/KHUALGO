#include<cstdio>

int main()
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    if(c-b>0) printf("%d",a/(c-b)+1);
    else printf("-1");
    return 0;
}