#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n/2;i<=n;i+=2)
    {
        for(j=i;j<n-i;j+=2)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=n-1;j++)
        {
            printf(" ");
        }
    }
}
