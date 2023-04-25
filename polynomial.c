#include<stdio.h>
#include<conio.h>
typedef struct node
{
   int coef,powe,power,coeff;
   struct node *next;
}node;
void addpolynomail(node *ptr1,node *ptr2,node *ptr3);
void main()
{
       int *ptr1,*ptr2,*ptr3;
    addpolynomial(ptr1,ptr2,ptr3);
}
void addpolynomial(node *ptr1,node *ptr2,node *ptr3)
{
    int powe;
    float coef;
    while((ptr1!=NULL)&&(ptr2!=NULL))
    {
        if(ptr1->power > ptr2->power)
        {
            coef=ptr1->coef;
            powe=ptr1->power;
            ptr1 = ptr1->next;
        }
        else if(ptr1->power < ptr2->power)
        {
            coef=ptr2->coeff;
            powe=ptr2->power;
            ptr2=ptr2->next;
        }
        else
        {
            coef = ptr1->coeff+ptr2->coeff;
            powe=ptr1->power;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        if(coef!=0)
        addnode(ptr3, coef,powe);
    }
    if(ptr1==NULL)
    {
        for(; ptr2!=NULL;ptr2 = ptr2->next)
        addnode(ptr3,ptr2->coeff,ptr2->power);
    }
    else if(ptr2==NULL)
    {
        for(;ptr1!=NULL;ptr1=ptr1->next)
        addnode(ptr3,ptr1->coeff,ptr1->power);
    }

}
