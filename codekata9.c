#include<stdio.h>

int main()
{
    int a,b,n[100];
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    int sum=0;
    for(int i=0;i<b;i++)
    {
        sum+=n[i];
    }

    printf("%d",sum);
    return 0;
}
