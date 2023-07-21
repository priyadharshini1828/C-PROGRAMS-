#include<stdio.h>
int main()
{
    int N,i,j,small;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("before sorting ");
    for(i=0;i<N;i++)
    {
        printf("%d",a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        small=i;
        for(j=i+1;j<N;j++)
        {
            if(a[j]<a[small])
            {
                small=j;
            }
        }
        int temp;
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
    }
    printf("after sorting");
    for(i=0;i<N;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
