//Double linked list for insertion and deletion at tail
#include<stdio.h>
#include<stdlib.h>
void  insertt();
int deletet();
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
				printf("\t1.Insert at tail\t2.Delete at tail \t3.print\t4.Exit \n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:insertt();
							break;
					case 2:k=deletet();
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
				head->prev=NULL;
				
			}
			else
			{
				struct node* temp,*temp1=head;
		   	    temp=(struct node* )malloc(sizeof(struct node));
				printf("Enter Element\n");
				scanf("%d",&ele);
				temp->e=ele;
				struct node*ptr=head;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->next=temp;
				while(temp1->next!=temp)
				{
					temp1=temp1->next;
				}
				temp->prev=temp1;
				temp->next=NULL;
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
int deletet()
	{
		int k;
		if(head==NULL)
		{
			printf("Deletion Not Possible\n");
			return 141533;
		}
		else
		{
			struct node *temp=head,*temp1=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}	
			k=temp->e;
			while(temp1->next!=temp)
			{
				temp1=temp1->next;
			}
			temp1->next=NULL;
			return k;
		}
 }
