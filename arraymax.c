#include<stdio.h>
int findmaximum(int a[]);
int findminimum(int a[]);
int findsumofarray(int a[]);
void main()
{
    int a[10],max,i;
    printf("enter element in array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array element are\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
  max=findmaximum(a);
   printf("max element=%d\n",max);
   //findminimum(a);
   printf("min element=%d\n",findminimum(a));
  // findsumofarray(a);
   printf("sum of element  = %d",findsumofarray(a));
}
int findmaximum(int a[])
{
    int max=a[0],i;
for(i=1;i<10;i++)
{
    if(max<a[i])
    max=a[i];
}
return max;
}
int findminimum(int a[])
{
    int min=a[0],i;
for(i=1;i<10;i++)
{
    if(min>a[i])
    min=a[i];
}
return min;
}
int findsumofarray(int a[])
{
    int sum=0,i;
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}