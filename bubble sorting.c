#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before sorting");
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("after sorting");
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
