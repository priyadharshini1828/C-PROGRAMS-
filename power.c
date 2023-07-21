#include<stdio.h>
int main()
{
    int a,b,k,i,pow=1;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&k);
    for(i=1;i<=b;i++)
    {
        pow=pow*a;
    }
    res=pow(10,k);
    final=pow%res;
    printf("%d",final);
    return 0;
}
