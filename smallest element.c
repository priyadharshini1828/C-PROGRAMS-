#include<stdio.h>
int main()
{
    int n,i,j,first;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    first = arr[1];
    if(arr[0]<arr[i])
    {
        printf("%d",first);
    }
    else
    {
        printf("%d",arr[i]);
    }
    return 0;
}
