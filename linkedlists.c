#include<stdio.h>
#include<stdlib.h>
void insert();
int delet();
void insertt();
int delett();
struct node 
{
	int e;
	struct node *next;
}v;
struct node *head;
int main()
{
	int op,k;
	do
		{
			printf("1)insert\n 2)delet\n 3)insert at tail\n 4)delet at tail\n  5)exit\n");
			printf("enter u r option\n");
			scanf("%d",&op);
			switch(op)
				{
					case 1:insert();
						break;
					case 2:k=delet();
						if(k!=9999)
						break;
					case 3:insertt();
						break;
					case 4:delett();
						break;
					case 5:
						break;
					default:
					printf("invalid option\n");
						break;
				}
		}while(op!=5);
}
void insert()
{
	int ele;
	printf("enter elements\n");
	scanf("%d",&ele);
	if(head==NULL)
		{
			head=(struct node *)malloc(sizeof(struct node));
			head->e=ele;
			head->next=NULL;
		}
	else
		{
			struct node *temp;
			temp=(struct node *)malloc(sizeof(struct node));
			temp->e=ele;
			temp->next=head;
			head=temp;
		}
}
int delet()
{
	if(head==NULL)
		{
			printf("elements are empty\n");
			return 9999;
		}			
	else
		{
			printf("deleted element is %d\n",head->e);			
			head=head->next;
		}
}
void insertt()
{
int ele;
	printf("enter elements\n");
	scanf("%d",&ele);
	if(head==NULL)
		{
			head=(struct node *)malloc(sizeof(struct node));
			head->e=ele;
			head->next=NULL;
		}
	else
		{
			struct node *temp,*temp1=head;
			temp=(struct node *)malloc(sizeof(struct node));
			temp->e=ele;
			temp->next=NULL;
			while(temp1->next!=NULL)
				{
					temp1=temp1->next;
				}
				temp1->next=temp;
		}
}
int delett()
{
	if(head==NULL)
		{
			printf("there is no elements\n");
		}
	else
		{
			struct node *temp=head,*temp1=head;			
			while(temp->next!=NULL)
				{
					temp=temp->next;
				}
			if(temp==head)
				{
					printf("deleted element is %d\n",temp->e);
					head=NULL;
				}
			else
				{
					while(temp1->next!=temp)
						{
							temp1=temp1->next;		
						}
							temp1->next=temp->next;
				}
		}
}
int insertbe()
{
	struct node *temp=head;	
	int ele,i=0,number;
	printf("which element you want to find\n");
	scanf("%d",&ele);
	if(head!=NULL)
		{
		while(temp!=NULL)
		{
			if(temp->e==ele)
				{
					i=1;
					break;
				}
			else
				temp=temp->next;
		}
		if(i==1)
			{
				printf("element is found\n");
			}
		else
			{
				printf("there is no element\n");
			}
	}

