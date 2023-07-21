#include<stdio.h>
#include<stdlib.h>
void insertionbeg();
void display();
void insertionend();
void insertion_loc();

struct node
{
    struct node * prev;
    int data;
    struct node *next;
}*head=NULL,*newnode,*temp;
int main()
{
    while(1)
    {
        int ch;
        printf("1.insertionbeg,2.insertionend,3.display,4.insertion_loc");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : insertionbeg();
                     break;
            case 2 : insertionend();
                     break;
            case 3 : display();
                     break;
            case 4 : insertion_loc;
                      break;
        }
    }
}
    void insertionbeg()
    {
        if(head==NULL)
        {
            struct node *ptr;
            ptr = (struct node*)malloc(sizeof(struct node));
            ptr->prev = NULL;
            ptr->next = NULL;
            scanf("%d",&ptr->data);
            head = ptr;
        }
        else
        {
            int data;
            struct node *ptr;
            ptr = (struct node*)malloc(sizeof(struct node));
            data=ptr->data;
            scanf("%d",&ptr->data);
            ptr->next =head;
            ptr->prev=NULL;
            head->prev=ptr;
            head= ptr;
        }
    }
    void display()
    {
        temp=head;
        while(temp->next!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
    void insertionend()
    {
        struct node *temp,*ptr;
        temp = head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        ptr = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->prev=temp;
        ptr->next=NULL;
        temp->next=ptr;
    }
    void insertion_loc()
    {
        int loc;
        scanf("%d",&loc);
        struct node* temp;
        temp = head;
        for(int i=0;i<loc-1;i++)
        {
            temp=temp->next;
        }
        struct node *ptr;
        ptr = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->prev = temp;
        ptr->next=temp->next;
        temp->next=ptr;
        ptr->next->prev=ptr;
    }



