#include<stdio.h>

int main()
{
    int max,n[3],i;
    for(i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<3;i++)
    {
        if(n[0]>n[1] && n[0]>n[2])
            max=n[0];
        else if(n[1]>n[2])
            max=n[1];
        else
        {
            max=n[2];
        }
        
    }

    printf("%d",max);
    return 0;
    
}
