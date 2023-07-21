#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*newnode,*head,*temp,*cur,*prev;
int main()
{
    int A;
    scanf("%d",&A);
    if(A==1)
    {
        int de;
        scanf("%d",&de);
        deleteitem(de);
    }
    else if(A==2)
    {
        deletelast();
    }
    else if(A==3)
    {
        deletefirst();
    }
    else if(A==4)
    {
        int se,reply;
        scanf("%d",&se);
        reply = searchitem(se);
        if(reply == 1)
        {
            printf("element found");
        }
        else
        {
            printf("element not found");
        }
    }
    else if (A==5)
    {

        int ie,p;
        scanf("%d",&ie);
        scanf("%d",&p);
        insertafter(ie);
    }
}
void deleteitem(int ele)
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    struct node* cur = head;
     prev = NULL;

    while(cur->value!=ele)
    {
        prev = cur;
        cur=cur->next;
    }
    if(prev!=NULL)
    {
        prev->next=cur->next;
        free(cur);
    }
}
void deletelast()
{
    if(head == NULL)
    {
        printf("list is empty");
    }
    struct node* cur = head;
    struct node* prev = NULL;
    while(cur->next!=NULL)
    {
        prev=cur;
        cur=cur->next;
    }
    if(prev->next!=NULL)
    {
        prev->next=NULL;
    }
    free(cur);
}
void deletefirst()
{
    struct node* cur;
    if(head == NULL)
    {
        printf("list is empty");
    }
    cur = head;
    head = head->next;
    free(cur);
}
int searchitem(int ele)
{
    struct node*temp;
    temp = head;
    while(temp!=0)
    {
        if(temp->value == ele)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
void insertafter(int elem,int num)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->value = elem;
    newnode->next = NULL;
    struct node*prev = head;
    while(prev->value!=num)
    {
        prev=prev->next;
    }
    newnode->next = prev->next;
    prev->next = newnode;

}
