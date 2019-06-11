#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
 for(int i=a+1;i<=b-1;i++)
 {
     if(i%2==0)
     printf("%d ",i);
 }
 return 0;
}
