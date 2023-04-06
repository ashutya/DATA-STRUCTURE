#include<stdio.h>
#include<conio.h>
void cal(int baseAdd,int w, int k)
{
int i,tot;
tot=baseAdd+(w*k);
printf("Answer = %d",tot);
}
void main(){
int baseAdd,w,k;
printf("Enter the baseaddress,size of variable and position\n");
scanf("%d%d%d",&baseAdd,&w,&k);
cal(baseAdd,w,k);
}