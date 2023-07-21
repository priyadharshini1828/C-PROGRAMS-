#include<stdio.h>
int main()
{
    char good[10];
    gets(good);
    int i;
    for(i=0;good[i]!='\0';i++)
    {
        i++;
    }
    printf("%d",i);
}
