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
    int pos,element;
    scanf("%d\n%d",&pos,&element);
    for(i=N-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=element;
    N++;
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
