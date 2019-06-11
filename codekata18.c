#include <stdio.h>
int main()
{
    int a,b,number, originalNumber, remainder, result = 0;

    
    scanf("%d %d", &a,&b);
for(number=a+1;number<=b-1;number++)
{result=0;
    originalNumber = number;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }

    if(result == number)
        printf("%d ",number);
    
}
    return 0;
}
