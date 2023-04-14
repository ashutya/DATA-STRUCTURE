#include<stdio.h>
void mult();
void main()
{
mult();
}
void mult()
{
    int arow,acol,brow,bcol,i,j,k,sum=0;
    printf("enter row and column of a");
    scanf("%d%d",&arow,&acol);
    printf("enter row and column of 2 matrix");
    scanf("%d%d",&brow,&bcol);
    int a[arow][acol],b[brow][bcol],c[arow][bcol];
    printf("enter elemnt in first matrix");
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
        if(acol!=brow)
        {
          printf("multiplication is not possibel");
        }
        else
        {
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
        }
        printf("multiplication matrix is");
        for(i=0;i<arow;i++)
        {
          printf("\n");
           for(j=0;j<bcol;j++)
           {
            printf("%d\t",c[i][j]);
           }
    }
}