#include<stdio.h>
int main()
{
    int N,count,rem;
    printf("Enter the number:");
    scanf("%d",&N);
    if(N!=0)
    {
        rem = N%8;
        if(rem==0)
        {
            count=2;
        }
        else if(rem<5)
        {
            count = rem;
        }
        else
        {
            count = 10-rem;
        }
        switch(count)
        {
            case 1 : printf("Thumb");
                     break;
            case 2 : printf("Index");
                     break;
            case 3 : printf("Middle");
                     break;
            case 4 : printf("Ring");
                     break;
            case 5 : printf("Little");
                     break;
        }
    }
    return 0;
}
