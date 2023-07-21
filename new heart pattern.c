#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n+6;j++)
        {
            if((j==13)||(i==3))
            {
              printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
