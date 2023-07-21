#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,j;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i>j&&a[i]>a[j])
            {
                printf("a[%d][%d]=%d\n",i,j,a[i]);
            }
        }
    }
    return 0;
}
