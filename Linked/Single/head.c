//Single Linked list inserting at head and tail
#include<stdio.h>
#include<stdlib.h>
void  insert();
int deleteh();
struct node
	{
		int e;
		struct node* next;
	};
struct node* head,*temp,*ptr=head;
int main()
{
			head=NULL;
		int op,k;
	do
		{
				printf("\t\t\t***Choose any Option***\n");
				printf("\t1.Insert at head\t2.Delete at head\t3.Print\t4.Exit \n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:insert();
							break;
					case 2:k=deleteh();
								printf("Deleted Element is %d\n",k);
									break;
					case 	3: print(); 
								break;
					case 	4:break;
					default: printf("\n***Invalid Choice***\n");
								 printf("\n*** Think About it ***\n");
				}
	   }while(op!=4);
}
 	void insert()
	{
			int ele,op,i=1,n;
			printf("Enter Element\n");
			scanf("%d",&ele);
			if(head==NULL){
				head= (struct node* )malloc(sizeof(struct node));
				head->e=ele;
				head->next=NULL;
			}
			else{
			temp=(struct node* )malloc(sizeof(struct node));
	        temp->e=ele;
			Printf("1.At head\t2.At Nth node 3.At tail\n");
			printf("%d",&op);
					switch(op)
					{
					case 1: temp->next=head;
				   	  		   head=temp;
				   	  		   break;
					case 2: printf("Enter the Node that u want to insert an element\n");
								scanf("%d",&n);
								while(i<n){
									ptr=ptr->next;
									i++;
									}
								temp->next=ptr->next;
								ptr=temp;
								break;
					case 3:while(ptr->next!=NULL)
								ptr=ptr->next;
								ptr->next=temp;
								temp->next=NULL:
								break;
					}
		}
}
 int deleteh()
 {
 		int k;
 		if(head==NULL)
 			printf("NoT PoSsIbLe\n");
 		else
 		{
 			struct node *ptr=head;
			Printf("1.At head\t2.At Nth node 3.At tail\n");
			printf("%d",&op);
					switch(op)
					{
					case 1:	k=head->e;
	 							head=head->next;
	 							return k;
	 							break;
	 				case 2:
	 							break;
	 				case 3:while(ptr->next!=NULL)
										ptr=ptr->next;
								struct node *temp1=head;
								while(temp1->next!=ptr)
										temp1=temp1->next;
								temp1->next=NULL;
								break;
			 		}
		}
}
 
				
				
				















	

