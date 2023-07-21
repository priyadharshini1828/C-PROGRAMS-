#include<stdio.h>
int main()
{
    int N,i,search,flag=0;
    scanf("%d",&N);
    //scanf("%d",&search);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&search);
    for(i=0;i<N;i++)
    {
        if (arr[i]==search)
        {
            flag=1;break;
        }
    }
    if(flag==1)
        {
            printf("search found");
        }
        else
        {
            printf("search not found");
        }
    return 0;
}
