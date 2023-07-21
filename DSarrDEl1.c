#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int pos;
    scanf("%d",&pos);
    for(i=pos-1;i<N-1;i++)
    {
        arr[i]=arr[i+1];
    }
    N--;
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
