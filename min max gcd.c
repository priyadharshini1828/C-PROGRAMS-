#include<stdio.h>
int main()
{
    int N,i,j,min,max,GCD;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
       scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    min = arr[0];
    max = arr[N-1];
    printf("\n%d\n%d",min,max);
    for(i=1;i<=min&&i<=max;i++)
    {
        if(min%i==0&&max%i==0)
        GCD=i;
    }
    printf("\n%d",GCD);
    return 0;
}
