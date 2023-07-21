#include<stdio.h>
int main()
{
    int N,i,search,flag;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&search);
    int low =0;
    int high = N-1;
    while(low<=high)
    {
        int mid;
        mid = (low+high)/2;
        if(arr[mid]==search)
        {
            flag=1;
        }
        if(search>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==1)
    {
        printf("element found");
    }
    else
    {
        printf("element not found");
    }
    return 0;
}
