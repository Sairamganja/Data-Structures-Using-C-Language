//Single Linked list inserting at Tail
#include<stdio.h>
#include<stdlib.h>
void  insertt();
void deletet();
void print();
struct node
	{
		int e;
		struct node* next;
	};
struct node* head;
struct node* temp;
struct node* ptr;
int main()
{
			head=NULL;
		int op,k,n;
	do
		{
				printf("\t\t\t***Choose any Option***\n");
				printf("\t1.Insert at tail\t\t2.Delete at tail\t\t3.Print \t 4.Exit\n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:insertt();
							break;
					case 2:deletet();
								
								break;
					case 3: print();
								break;
					case 4: break;
					default: printf("\n***Invalid Choice***\n");
								 printf("\n*** Think About it ***\n");
				}
	   }while(op!=4);
}
 	void insertt()
	{
			int ele;
			if(head==NULL)
			{
				head= (struct node* )malloc(sizeof(struct node));
				printf("Enter Element\n");
				scanf("%d",&ele);
				head->e=ele;
				head->next=NULL;
			}
			else
			{
		   	    temp=(struct node* )malloc(sizeof(struct node));
		   	    ptr=(struct node* )malloc(sizeof(struct node));
				ptr=head;
				while(ptr->next!=NULL)
				{
				ptr=ptr->next;
				}
				ptr->next=temp;
				printf("Enter Element\n");
				scanf("%d",&ele);
				temp->e=ele;
				temp->next=NULL;
				}
  } 

  void  deletet()
  {
			struct node* temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			struct node* temp1=head;
			while(temp1->next!=temp)
			{
				temp1=temp1->next;
			}
			temp1->next=NULL;
	}
 
 void print()
 {
 	 	struct node *temp=head;
 	 	printf("List is :-\n");
 	 	while(temp!=NULL)
 	 	{
 	 		printf(" %d",temp->e);
 	 		temp=temp->next;
 	 	}
 	 	printf("\n");
 	 }
				
				
				
				
				
				
				
				
				
				















	

