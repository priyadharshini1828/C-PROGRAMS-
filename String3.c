#include<stdio.h>
int main()
{
    char good[10];
    gets(good);
    int i,l;
    l=strlen(good);
    for(i=l;i>=0;i--)
    {
        printf("%c ",good[i]);
    }
    return 0;
}
