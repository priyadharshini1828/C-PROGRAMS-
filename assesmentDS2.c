#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*newnode,*head = NULL,*temp;
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       newnode = (struct node*)malloc(sizeof(struct node));
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       if(head == NULL)
       {
           head = newnode;
           temp =newnode;
       }
       else
       {
           temp->next = newnode;
           temp= temp->next;
       }
    }
       temp = head;
       printf("Data Entered in the List are:\n");
       while(temp!=NULL)
       {
           printf("Data = %d \n",temp->data);
           temp=temp->next;
           count++;
       }
    printf("Total Number Of Nodes = %d",count);
    return 0;
}
