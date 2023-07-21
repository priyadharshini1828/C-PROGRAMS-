#include<stdio.h>
int main()
{
    char good[10];
    gets(good);
    int i;
    while(good[i]!='\0')
    {
        printf("%c ",good[i]);
        i++;
    }
    return 0;
}
