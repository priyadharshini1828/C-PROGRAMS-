#include<stdio.h>
int main()
{
    int N,i,j,temp;
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
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d",&arr[i]);
    }
    return 0;
}
