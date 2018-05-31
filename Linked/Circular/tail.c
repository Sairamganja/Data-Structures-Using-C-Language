#include<stdio.h>
#include<stdlib.h>
void  insertt();
int deletet();
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
				printf("\t1.Insert at tail\t\t2.Delete at tail\t\t3.Print\t\t4.Exit \n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:insertt();
							break;
					case 2:k= deletet();
								printf("the deleted element is %d \n ",k);
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
				head->next=head;
			}
			else
			{
			struct node* temp;
		   	    temp=(struct node* )malloc(sizeof(struct node));
		   	  struct node * ptr=head;
				while(ptr->next!=head)
				{
				ptr=ptr->next;
				}
				
				printf("Enter Element\n");
				scanf("%d",&ele);
				temp->e=ele;
				temp->next=ptr->next;
				ptr->next=temp;
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
 	 	printf( " %d",tem->e); 
 	 	printf("\n");
  }
 	 
 
    int  deletet()
  {	
  			int k;
			if(head->next==head)
			{	
				k=head->e;
				head=NULL;
			}
			
			else
			{
				struct node* temp=head;
					while(temp->next!=head)
					{
						temp=temp->next;
					}
			k=temp->e;
			struct node* temp1=head;
					while(temp1->next!=temp)
					{
						temp1=temp1->next;
					}
			temp1->next=head;
		
			return k;
			}	
	}
 		
			
