#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// defining structure of a node
typedef struct nodetype
{
    struct nodetype *prev;
    int info;
    struct nodetype *next;

} node;
void traverseinrevorder(node *tail)
{
    while (tail != NULL)
    {
        printf("%d\n", tail->info);
        tail = tail->prev;
    }
}

void insertatend(node **head,node **tail,int item)
{
node *ptr;
ptr=(node *)malloc(sizeof(node));
ptr->info=item;
if(*head==NULL)
{
    ptr->next=ptr->prev=NULL;
    *head=*tail=ptr;
}
else
{
    ptr->next=NULL;
    ptr->prev=*tail;
    (*tail)->next=ptr;
    *tail=ptr;
}
}
void insertatbeginning(node **head, node **tail, int item)
{
    node *ptr;
    ptr = (node *)malloc(sizeof(node));
    ptr->info = item;
    if (*head == NULL)
    {
        ptr->next = NULL;
        ptr->prev = NULL;
        *head = ptr;
        *tail = ptr;
    }
    else
    {
        ptr->next = *head;
        ptr->prev = NULL;
        (*head)->prev = ptr;
        *head = ptr;
    }
}

void traverseinorder1(node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->info);
        head = head->next;
    }
}

void peakelement(node *head)
{
    if (head == NULL || head->next == NULL)
        return;
    else
    {
        head = head->next;
        while (head->next != NULL)
        {
            printf("%d", head->info);
            if ((head->info < head->prev->info) && (head->info < head->next->info))
            {
                printf("%d ", head->info);
                break;
            }
            else
            {
                head = head->next;
            }
        }
    }
}

void main()
{
    node *head, *tail;
    int choice, element, after;
    head = NULL;
    tail = NULL;
    while (1)
    {
        printf("                  option available");
        printf("++++++++++++++++++++++++++++++++++++++ \n\n");
        printf("   1. insert at beginning\n");
        printf("   2. traverse\n");
        printf("   3 insert at end\n");
        printf("   4.peak element\nt");
        printf("   5.traverse in rev order\nt");
        printf("   6. exit\n\n");
        printf("enter your choice(1-4)");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n enter element");
            scanf("%d", &element);
            insertatbeginning(&head, &tail, element);
            break;
        case 2:

            traverseinorder1(head);
            break;
        case 3:
               printf("\nenter element");
               scanf("%d",&element);
                insertatend(&head,&tail,element);
            break;

        case 4:
            peakelement(head);

        case 5:
             traverseinrevorder(tail);
             break;
        case 6:
               exit(1);
    }
} 
}