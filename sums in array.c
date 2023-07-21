#include<stdio.h>
int main()
{
    int N,i,j,flag=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int value;
    scanf("%d",&value);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(a[i]+a[j]==value)
            {
               flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
