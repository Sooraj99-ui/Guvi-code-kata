#include<stdio.h>
#include<string.h>

/* int main()
{
    char a[100];
    scanf("%s",a);
    if(strcmp(strrev(a),a))
    printf("yes");
    else
    {
        printf("No");
    }
    return 0;
} */

int main()
{
    int a,t,num,rev=0;
    scanf("%d",&a);
    t=a;
    while(a>0)
    {
        num=a%10;
        rev=(rev*10)+num;
        a/=10;
    }
    //printf("%d",rev);
    if(t==rev)
    printf("yes");
    else printf("no");
    return 0;
}
