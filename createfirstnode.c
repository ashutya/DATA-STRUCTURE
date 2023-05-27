#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void main()
{
    struct node *head;
    struct node *ptr;
    head=(struct node *)malloc(sizeof(struct node));
    ptr=(struct node *)malloc(sizeof(struct node));
    head->data=40;
    head->next=NULL;
    ptr->data=30;
    ptr->next=NULL;
    printf("%d" ,ptr->data);
    printf("%d" ,head->data);
}