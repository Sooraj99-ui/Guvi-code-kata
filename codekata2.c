#include<stdio.h>
#include<ctype.h>

int main()
{
    long int number;
    scanf("%ld",&number);
    if(number && !isalpha(number))
    {   if(number%2==0)
            printf("Even");
        else if(number%2!=0)
            printf("Odd");
    }
    else
    {
        printf("Invalid");
    }
    return 0;

}
