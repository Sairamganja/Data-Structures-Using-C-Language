#include<stdio.h>
#include<malloc.h>
struct node
{
    int e;
    struct node *next;
};
struct node * insertionbeg(struct node *);//insertion at begining
struct node * insertiontail(struct node *);//insertion at tail
struct node * insertionafter(struct node *);//insertion after element
struct node * insertionbefore(struct node *);//insertion before element
struct node * deletebeg(struct node *);//deletion at begining
struct node * deletetail(struct node *);//deletion at tail
struct node * deletesearch(struct node *);//deleting search element
void display(struct node *);////displaying  elements
void search(struct node *);//displaying search element
main()
{
    struct node *head=NULL;
    int op;
    do
        {
            printf("enter any option\n");
            printf("1:insertion at begining\n2:insertion at tail\n3:displaying the elements\n4:search the elements\n5:insertionafter element\n6:insertion before element\n7:deletion at begining\n8:deletion at tail\n9:delete search element\n10:exit\n");
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
                        case 6:
                            head=insertionbefore(head);
                            break;
                         case 7:
                            head=deletebeg(head);
                            break;
                         case 8:
                            head=deletetail(head);
                            break;
                         case 9:
                            head=deletesearch(head);
                            break;
                         case 10:
                            printf("thank you\n");
                            break;
                        default :
                            printf("invalid option\n");
                    }
            }while(op!=10);
}
struct node * insertionbeg(struct node *head)
{
    int e;
    printf("enter element\n");
    scanf("%d",&e);
    if(head==NULL)
        {
            head=(struct node *)malloc(sizeof(struct node));
            head->e=e;
            head->next=head;
        }
    else
        {
            struct node *temp,*temp1=head;
            temp=(struct node *)malloc(sizeof(struct node));
            temp->e=e;
            temp->next=head;
            while(temp1->next!=head)
                temp1=temp1->next;
              temp1->next=temp;
              head=temp;
        }
     return head;
}
struct node * insertiontail(struct node *head)
{
    int e;
    printf("enetr element\n");
    scanf("%d",&e);
    if(head==NULL)
    {
        head=(struct node *)malloc(sizeof(struct node));
        head->e=e;
        head->next=head;
    }
    else
    {
        struct node *temp,*temp1=head;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->e=e;
        temp->next=head;
        while(temp1->next!=head)
            temp1=temp1->next;
          temp1->next=temp;
    }
  return head;
}
void display(struct node *head)
{
    if(head==NULL)
        printf("empty\n");
    else
    {
        struct node *temp=head;
        while(temp->next!=head)
        {
            printf(" %d ",temp->e);
            temp=temp->next;
        }
        if(temp->next==head)
            printf("%d",temp->e);
        
    }
    printf("\n");
}
void search(struct node *head)
{
    int i=0,e;
     struct node *temp=head;
    printf("enter element which you want tgo search\n");
    scanf("%d",&e);
    if(head==NULL)
        printf("no elements are there\n");
    else if(temp->next==head)
        {
           if(temp->e==e)
           {
            i=1;
           }
        }
    else
      {
            while(temp->next!=head)
            {
                if(temp->e==e)
                {
                    i=1;
                    break;
                }
              else
                temp=temp->next;
            }
          if(temp->e==e)
            i=1;
       }
   if(i==1)
    printf("element found\n");
   else
    printf("not found\n");
}
struct node * insertionafter(struct node *head)
{
    int e,ele,i=0;
    struct node *temp=head;
        printf("enter element which you want tgo search\n");
        scanf("%d",&e);
    if(head==NULL)
        printf("no elements are there\n");
    else if(head->next==head)
        {
            if(head->e==e)
                i=1;
        }
    else
      {
        while(temp->next!=head)
            {
                if(temp->e==e)
                {
                    i=1;
                    break;
                }
              else
                temp=temp->next;
            }
       }
     if(i==1)
       {
            printf("enter element that u want to insert after it\n");
            scanf("%d",&ele);
            struct node *temp1;
            temp1=(struct node *)malloc(sizeof(struct node ));
            temp1->e=ele;
            temp1->next=temp->next;
            temp->next=temp1;
       }
     else
        printf("elementnot found\n");
     return head;
}
struct node * insertionbefore(struct node *head )
{
        int e,ele,i=0;
    struct node *temp=head;
        printf("enter element which you want tgo search\n");
        scanf("%d",&e);
    if(head==NULL)
        printf("no elements are there\n");
    else if(head->next==head)
        {
            if(head->e==e)
                i=1;
        }
    else
      {
        while(temp->next!=head)
            {
                if(temp->e==e)
                {
                    i=1;
                    break;
                }
              else
                temp=temp->next;
            }
       }
    if(i==1)
    {
        struct node *temp1,*temp2=head;
        printf("enter element that you want to insert before if\n");
        scanf("%d",&ele);
        temp1=(struct node *)malloc(sizeof(struct node));
        temp1->e=ele;
        temp1->next=temp;
        while(temp2->next!=temp)
            temp2=temp2->next;
         temp2->next=temp1;
    }
    else
        printf("element not found\n");
    return head;
}
struct node * deletebeg(struct node *head)
{
     struct node *temp=head;
    if(head==NULL)
        printf("empty\n");
    else if(temp->next==head)
        {
            printf("deleted element=%d\n",head->e);
            head=NULL;
        }
    else
        {
            while(temp->next!=head)
                temp=temp->next;
              temp->next=head->next;
              printf("deleted element=%d\n",head->e);
              head=head->next;
        }
     return head;
}
struct node * deletetail(struct node *head)
{
     struct node *temp=head;
    if(head==NULL)
        printf("empty\n");
    else if(temp->next==head)
        {
            printf("deleted element=%d\n",head->e);
            head=NULL;
        }
    else
        {
            while(temp->next->next!=head)
                temp=temp->next;
              printf("deleted element=%d\n",temp->next->e);
              temp->next=head;
        }
      return head;
}
struct node *deletesearch(struct node *head)
{
            int e,i=0;
    struct node *temp=head;
        printf("enter element which you want to delete\n");
        scanf("%d",&e);
    if(head==NULL)
        printf("no elements are there\n");
    else if(head->next==head)
        {
            if(head->e==e)
                i=1;
        }
    else
        {
            while(temp->next!=head)
                {
                    if(temp->e==e)
                        {
                            i=1;
                            break;
                        }
                    else
                        temp=temp->next;
                }
       }
     if(i==1)
        {
            if(temp->next!=NULL)
                {
                    struct node *temp1=head;
                    printf("deleted element=%d\n",temp->e);
                    while(temp1->next!=temp)
                        temp1=temp1->next;
                    temp1->next=temp->next;
                }
            else if(temp->next==head)
                head=deletetail(head);
             else if(temp==head)
                head=deletebeg(head);
        }
     else
        printf("element not found\n");
    return head;
} 
