//sag;ib;sa;ih;ihb
#include<stdio.h>
int main()
{
    int n,fact=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}
