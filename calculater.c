#include<stdio.h>
int main()
{
    int a, b;
    char ch;
    printf("Enter the number's: ");
    scanf("%d%d",&a, &b);
    
    printf("Enter Character: ");
    scanf("%c",&ch);
    switch(ch)
    {
      case'+':
       printf("sum = %d", a+b);
       break;
      case'*':
       printf("product = &d",a*b);
       break;
      case'-':
       if(a>b)
          printf("big = %d small = %d", a,b);
       else
         printf("big = %d small = %d", b,a);
        break;
        default:
        printf("Invalid charactor");
    }
    return 0;
}
