#include<stdio.h>
#include<malloc.h>
struct node
{
    int e;
    struct node *next;
    struct node *pre;
};
struct node * insertionbeg(struct node *);
struct node * insertiontail(struct node *);
struct node * insertionafter(struct node *);
struct node * insertionbefore(struct node *);
struct node * deletebeg(struct node *);
struct node * deletetail(struct node *);
struct node * deletionsearch(struct node *);
void display(struct node *);
void search(struct node *);
main()
{
    struct node *head=NULL;
    int op;
    do
    {
        printf("enter option\n");
        printf("1:insertion at begining\n2:insertion at tail\n3:displaying the elements\n4:searching element\n5:insertion after element\n6:insertion before element\n7:delete at begining\n8:delete at tail\n9:delete search element\n10:exit\n");
        scanf("%d",&op);
        switch(op)
        {
        
            case 1:
                head=insertionbeg(head);
                break;
           case 2:
                head=insertiontail(head);
                break;
           case 3:
                display(head);
                break;
           case 4:
                search(head);
                break;
            case 5:
                head=insertionafter(head);
                break;
            case 6 :
                head=insertionbefore(head);
                break;
            case 7:
                head=deletebeg(head);
                break;
             case 8:
                head=deletetail(head);
                break;
              case 9:
                head=deletionsearch(head);
                break;
              case 10 :
                printf("thank you\n");
                break;
            default :
                printf("invalid option\n");
            
       }
    }while(op!=10);
}
struct node *insertionbeg(struct node *head)
{
    int e;
    printf("enter element\n");
    scanf("%d",&e);
    if(head==NULL)
        {
            head=(struct node *)malloc(sizeof(struct node ));
            head->e=e;
            head->next=NULL;
            head->pre=NULL;
        }
    else
        {
            struct node *temp;
            temp=(struct node *)malloc(sizeof(struct node));
            temp->e=e;
            temp->pre=NULL;
            temp->next=head;
            head->pre=temp;
            head=temp;
        }
    return head;
}
struct node *insertiontail(struct node *head)
{
    int e;
    printf("enter element\n");
    scanf("%d",&e);
    if(head==NULL)
    {
        head=(struct node *)malloc(sizeof(struct node ));
        head->e=e;
        head->next=NULL;
        head->pre=NULL;
    }
    else
    {
        struct node *temp,*temp1=head;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->e=e;
        temp->next=NULL;
        while(temp1->next!=NULL)
            temp1=temp1->next;
         temp1->next=temp;
         temp->pre=temp1;
    }
    return head;
}
void search(struct node *head)
{
    int i=0,e;
    printf("enetr search element\n");
    scanf("%d",&e);
    if(head==NULL)
        printf("no elements are there\n");
    else
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            if(temp->e==e)
            {
                i=1;
                break;
            }
          else
            temp=temp->next;
        }
      if(i==1)
        printf("element found\n");
      else
        printf("not found\n");
    }
}
void display(struct node *head)
{
     struct node *temp=head;
    if(head==NULL)
        printf("empty\n");
    else
        {
            while(temp!=NULL)
            {
                printf("%d ",temp->e);
                temp=temp->next;
            }
        }
        printf("\n");
}
struct node * insertionafter(struct node *head)
{
    int e,ele,i=0;
    printf("enetr search element\n");
    scanf("%d",&e);
    if(head==NULL)
        printf("no elements are there\n");
    else
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            if(temp->e==e)
            {
                i=1;
                break;
            }
          else
            temp=temp->next;
        }
        if(i==1)
        {   
            printf("enter element that u want to insert\n");
            scanf("%d",&ele);
            struct node *temp1;
            temp1=(struct node *)malloc(sizeof(struct node));
            temp1->e=ele;
            temp1->pre=temp1;
            temp1->next=temp->next;
            temp->next->pre=temp1;
            temp->next=temp1;
         }
    }
    return head;
}
struct node * insertionbefore(struct node *head)
{
    int e,ele,i=0;
    printf("enetr search element\n");
    scanf("%d",&e);
    if(head==NULL)
        printf("no elements are there\n");
    else
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            if(temp->e==e)
            {
                i=1;
                break;
            }
          else
            temp=temp->next;
        }
     if(i==1)
        {
            printf("enter element that u want to insert after it\n");
            scanf("%d",&ele);
            struct node *temp1;
            temp1=(struct node *)malloc(sizeof(struct node));
            temp1->e=ele;
            temp1->next=temp;
            temp1->pre=temp->pre;
            temp->pre->next=temp1;
            temp->pre=temp1;
        }
      }
      return head;
}
struct node * deletebeg(struct node *head)
{
    if(head==NULL)
        printf("empty\n");
    else if(head->next==NULL)
    {
        printf("deleted element=%d\n",head->e);
        head=NULL;
    }
    else
        {
            printf("deleted element=%d\n",head->e);
            head=head->next;
            head->pre=NULL;
        }
    return head;
}
struct node * deletetail(struct node *head)
{
    if(head==NULL)
        printf("empty\n");
    else if(head->next==NULL)
    {
        printf("deleted element=%d\n",head->e);
        head=NULL;
    }
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
         printf("deleted element=%d\n",temp->e);
         temp->pre->next=NULL;
    }
  return head;
}
struct node * deletionsearch(struct node *head)
{
    int e,ele,i=0;
    printf("enter search element\n");
    scanf("%d",&e);
    if(head==NULL)
        printf("no elements are there\n");
    else
    {
        struct node *temp=head;
        while(temp!=NULL)
        {
            if(temp->e==e)
            {
                i=1;
                break;
            }
          else
            temp=temp->next;
        }
     if(i==1)
        {
            if(temp->next!=NULL)
            {
                printf("deleted element=%d\n",temp->e);
                temp->pre->next=temp->next;
                temp->next->pre=temp->pre;
            }
            else if(temp->next==NULL)
                head=deletebeg(head);
             else
                head=deletetail(head);
        }
     }
      return head;
}
