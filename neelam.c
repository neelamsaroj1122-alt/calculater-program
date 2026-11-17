#include<stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("enter two number\n");
    scanf("%d",&a &b);
    printf("enter a character");
    scanf("%c",&ch);
    switch(ch)
    {
        case'+':
        printf("sum of a & b=%d",a+b);
        break;
        case'-':
        if(a>b)
        {
            printf("big-small,%d",a-b);
        }
            else
            {
            printf("%d",b-a);
            }
            case'*':
            printf("product of a ,b=%d",a*b);
            break;
    }
            default:
            printf("invalid input");
                
                
            
            return 0;
}