#include<stdio.h>
void main()
{
    int a[3][3],i,j,b[3][3];
    printf("enter value for matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("transpose matrix is");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
        printf("%d ",b[i][j]);
    }
    printf("\n");
    }

}