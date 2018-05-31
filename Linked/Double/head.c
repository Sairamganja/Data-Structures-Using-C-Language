//Double Linked list for insertion and Deletion at head
#include<stdio.h>
#include<stdlib.h>
void  inserth();
int deleteh();
void print();
struct node
	{
		int e;
		struct node* prev;
		struct node* next;
	};
struct node* head;
int main()
{
			head=NULL;
		int op,k,n;
	do
		{
				printf("\t\t\t***Choose any Option***\n");
				printf("\t1.Insert at head\t2.Delete at head \t3.print\t4.Exit \n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:inserth();
							break;
					case 2:k=deleteh();
								if(k!=141533){
							printf("Deleted Element is %d  \n",k);
								}
								break;
					case 3: print();
								break;
					case 4: break;
					default: printf("\n***Invalid Choice***\n");
								 printf("\n*** Think About it ***\n");
				}
	   }while(op!=4);
}
 	void inserth()
	{
			int ele;
			if(head==NULL)
			{
				head= (struct node* )malloc(sizeof(struct node));
				printf("Enter Element\n");
				scanf("%d",&ele);
				head->e=ele;
				head->next=NULL;
				head->prev=NULL;
				
			}
			else
			{
				struct node* temp;
		   	    temp=(struct node* )malloc(sizeof(struct node));
				printf("Enter Element\n");
				scanf("%d",&ele);
				temp->e=ele;
				temp->prev=NULL;
				temp->next=head;
				struct node*ptr=head;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->prev=temp;
			head=temp;
			}
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
				
	int deleteh()
	{
		int k;
		if(head==NULL)
		{
			printf("Deletion Not Possible\n");
			return 141533;
		}
		else
		{
		k=head->e;
		head=head->next;
		return k;
		}
 }
