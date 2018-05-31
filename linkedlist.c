#include<stdio.h>
#include<malloc.h>
struct node
{
        int e;
        struct node *next;
};
struct node *head;
struct node *temp;
void insert();
void delete();
int main()
{
        int op,k; 
        do
        {
                  printf("      1.insert\n      2.delete\n     3.exit\n      ");
                  printf("choose your option\n");
                  scanf("%d",&op);
                  switch(op)
                  {
                          case 1:
                          insert();
                          break;
                          case 2:
                          delete();
                          break;
                          case 3:
                          break;
                          default:
                          printf("invalid\n");
                  }
         }while(op!=3);
}
void insert()
{
      int ele;
      if(head==NULL)
      {
            head=(struct node *)malloc(sizeof(struct node));
            printf("enter your element\n");
            scanf("%d",&ele);
            head->e=ele;
            head->next=NULL;
      }
      else
      {
            temp=(struct node *)malloc(sizeof(struct node));
            printf("enter your element\n");
            scanf("%d",&ele);
            temp->e=ele;
            temp->next=head;
            head=temp;
       }
}
void delete()
{
      if(head==NULL)
      {
          printf("List is Empty.\n");  
      }
      else
      {
            printf("%d is deleted.\n",head->e);
            head=head->next;           
      }
}

      
