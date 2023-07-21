#include<stdio.h>
void plustwo(int *a)
{
    *a=*a+2;
    printf("\n%d",*a);
}
int main()
{
    int n;
    int *p=&n;
    scanf("%d",&n);
    printf("%d",n);
    plustwo(p);
    printf("\n%d",n);
    return 0;
}
