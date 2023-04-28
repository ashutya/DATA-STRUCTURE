#include<stdio.h>
#include<conio.h>
void mult(int arow,int acol,int brow,int bcol,int a[arow][acol],int b[brow][bcol]);
void main()
{
   int arow,acol,brow,bcol,i,j;
   printf("enter row for first matrix");
   scanf("%d",&arow);
    printf("enter col for first matrix");
   scanf("%d",&acol);
    printf("enter row for second matrix");
   scanf("%d",&brow);
    printf("enter col for second matrix");
   scanf("%d",&bcol);
   int a[arow][acol],b[brow][bcol],c[arow][bcol];
   printf("enter element in first matrix");
      for(i=0;i<arow;i++)
      {
        for(j=0;j<acol;j++)
        {
              scanf("%d",&a[i][j]);
        }
      }

    printf("enter element in second matrix");
        for(i=0;i<brow;i++)
        {
            for(j=0;j<bcol;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        mult(arow,acol,brow,bcol,a,b);
}
void mult(int arow,int acol,int brow,int bcol,int a[arow][acol],int b[brow][bcol])
{
  int c[arow][bcol],sum=0;
  int i,j,k;
  for(i=0;i<arow;i++)
  {
    for(j=0;j<bcol;j++)
    {
        for(k=0;k<bcol;k++)
        {    
            sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;
        sum=0;
    }
  }
  printf("multiply matrix is");
  for(i=0;i<arow;i++)
  {
    printf("\n");
    for(j=0;j<bcol;j++)
    {
        printf("%d\t",c[i][j]);
    }
  }
    
}