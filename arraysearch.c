#include<stdio.h>
int search(int a[],int value);
void main()
{ 
     int a[10],i,value;
    printf("enter array element ");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter element to search");
    scanf("%d",&value);
       int index=search(a,value);
         if(index==-1)
         {
             printf("value not found");
         }
         else
        {
    printf("element exist in array");
  }
}
int search(int a[10], int value)
{
    int j;
   
    for(j=0;j<10;j++)
    {
        if(a[j]==value)
        {
            return 1;
        }
    }
           return -1;
}