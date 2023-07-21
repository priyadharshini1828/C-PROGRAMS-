#include<stdio.h>
int main()
{
    int N,sum,res=0;
    scanf("%d",&N);
    int i;
    for(i=1;i<=N;i++)
    {
        sum=N-i;
        res = sum+res;
    }
    printf("%d",res);
    return 0;
}
