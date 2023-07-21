#include<stdio.h>
int main()
{
    int N,i,j,count;
    scanf("d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[N]);
    }
    int result;
    scanf("%d",&result);
    for(i=0;i<7;i++)
    {
        {
           if(arr[i]+arr[i+1]==result)
           {
               count++;
           }
        }
    }
    printf("%d",count);
    return 0;
}
