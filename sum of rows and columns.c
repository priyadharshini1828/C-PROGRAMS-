#include<stdio.h>
int main()
{
    int i,j,row,col,sum=0,sum1=0;
    scanf("%d",&row);
    scanf("%d",&col);
    int a[5][5];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum+=a[i][j];
        }
        printf("%d ",sum);
        sum=0;

    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum1+=a[j][i];
        }
        printf("%d ",sum1);
        sum1=0;
    }
    return 0;
}
