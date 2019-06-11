#include <stdio.h>
int main()
{
    int n,m, i, flag = 0;

    scanf("%d %d", &n,&m);
    for(i = n+1; i <= m-1; ++i)
    
    {flag=0;
        for(int j = 2; j <= i/2; ++j)
    {
        
        if(i%j == 0)
        {
            flag = 1;
            break;
        }
    

   
        
    }if (flag == 0)
          printf("%d ",i);
    }
    return 0;
}
