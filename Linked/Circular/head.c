#include<stdio.h>
#include<stdlib.h>
void  inserth();
int deleteh();
void print();
struct node
	{
		int e;
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
				printf("\t1.Insert at head\t\t2.Delete at head\t\t3.Print\t\t 4.Exit \n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:inserth();
							break;
					case 2:k= deleteh();
								if(k!=22)
								{
								printf("the deleted element is %d \n ",k);
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
				head->next=head;
				
			}
			else
			{
			struct node * temp;
			struct node* ptr=head;
			temp= (struct node* )malloc(sizeof(struct node));
				printf("Enter Element\n");
				scanf("%d",&ele);
				temp->e=ele;
				while(ptr->next!=head)
				{
					ptr=ptr->next;
				}
				ptr->next=temp;
				temp->next=head;
				head=temp;
			}	
} 


 void print()
 {
 	 	struct node *tem=head;
 	 	printf("List is :-\n");
 	 	while(tem->next!=head)
 	 	{
 	 		printf(" %d",tem->e);
 	 		tem=tem->next;
 	 	}
 	 	printf(" %d",tem->e);
 	 	printf("\n");
  }
 	 
  int  deleteh()
  {	
  	int k;
  		if(head==NULL)
  		{
  			printf("Deletion Not pOssible\n");
  	}	
  		else
  		if(head->next==head)
  		{
  			k=head->e;
  			head=NULL;
  			return k;
  		}
  		else
  		{
  			k=head->e;
  			struct node * ptr=head;
  			while(ptr->next!=head)
  			{
  				ptr=ptr->next;
  			}
  			head=head->next;
  			ptr->next=head;
  		return k;
  	}
 }	
  	 	 

