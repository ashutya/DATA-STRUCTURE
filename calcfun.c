#include<stdio.h>
void calculator();
void main()
{
    
    calculator();

}
void calculator()
{
    float a,b,sub,sum,mul,div;
    //char ch;
    int n;
     
    printf("enter two number");
    scanf("%f%f",&a,&b);
    //fflush(stdin);
    //printf("enter the operator which you want to perform - + / *");
    //scanf("%c",&ch);
    printf("enter 1 for addition\n");
    printf("enter 2 for substraction\n");
    printf("enter 3 for multiply\n");
    printf("enter 4 for div\n");
    scanf("%d",&n);
   
    switch(n)
    {
        case 1:
        printf("sum=%f",a+b);
        break;
        case 2:
        printf("sub=%f",a-b);
        break;
        case 3:
        printf("mul=%f",a*b);
        break;
        case 4:
        printf("div=%f",a/b);
        break;
        default:
        printf("invalid operator ");
    }
}