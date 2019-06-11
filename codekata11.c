#include<stdio.h>
int main()
{
    int a,b,pow=1;
    scanf("%d%d",&a,&b);
    for(int i=0;i<b;i++)
    {
        pow*=a;
    }
    printf("%d",pow);
    return 0;
}
