#include<stdio.h>
int main()
{
    int N,res;
    scanf("%d",&N);
    if(N%2==0)
    {
        res=N/2;
        printf("%d",res);
    }
    else
    {
        res=(N+1)/2;
        printf("%d",res);
    }
    return 0;
}
