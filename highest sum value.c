#include<stdio.h>
int main()
{
    int N,i,j,sum;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(arr[i]>arr[j])
        {
            sum = arr[i]+arr[j];
            break;
        }
        }

       // printf("%d",sum);
    }
    printf("%d",sum);
    return 0;
}
