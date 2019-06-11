#include<stdio.h>
#include<ctype.h>

int main()
{
    char input;
    scanf("%c",&input);
    if(isalpha(input))
    {
        switch(input)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':printf("Vowels");
                 break;
        default:printf("Consonant");
        }
    }
    else
    {
        printf("Invalid");
    }
    
    return 0;
}
