#include<stdio.h>
int main()
{
    long int number;
    scanf("%ld",&number);
    
    if(number>0)
        printf("Positive");
    else if(number<0)
        printf("Negative");
    else if(number == 0)
       printf("Zero");

    return 0;
}
