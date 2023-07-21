#include<stdio.h>
int main()
{
    int num ;
    scanf("%d",&num);
    int arr[num];
    int row,col,temp;
    for(row = 0;row <num;row++)
    {
        scnaf("%d",&arr[row]);
    }
    for(row = 0 ;row < num ;row++)
    {
        for(col = 0;col < num;col++)
        {
            if(arr[row]>arr[col])
            {
                temp = arr[row];
                arr[row] = arr[col];
                arr[col] = temp;
            }
        }
    }
    for(row=0;row<num;row++)
    {
        printf("%d",arr[row]);
    }
    return 0;
}
