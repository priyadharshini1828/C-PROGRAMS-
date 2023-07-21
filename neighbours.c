#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++)
    {
        if(arr[i]>arr[i+1]&&arr[i]>arr[i-1])
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
