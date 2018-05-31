//Single Linked list inserting & Deleting at head and tail and  Nth node
#include<stdio.h>
#include<stdlib.h>
void  insert();
void delete();
void print();
int count();
void find();
struct node
	{
		int e;
		struct node* next;
	};
struct node* head;
int main()
{
			head=NULL;
		int op,k;
	do
		{
				printf("\t\t\t***Choose any Option***\n");
				printf("\t1.Insert\t2.Delete \t3.Print\t4.Count\t5.find\t6.Exit\n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:insert();
						    	break;
					case 2:delete();
							   break;
					case 	3:print();
								break;
					case 4:k= count();
								printf("The no.of Nodes Are %d\n",k);
								break;
					case 5:find();
								break;
					case 6:break;
					default: printf("\n***Invalid Choice***\n");
								 printf("\n*** Think About it ***\n");
				}
	   }while(op!=6);
}
 	void insert()
	{
			int ele,op,i=1,n,s;
			printf("Enter Element\n");
			scanf("%d",&ele);
			if(head==NULL){
				head= (struct node* )malloc(sizeof(struct node));
				head->e=ele;
				head->next=NULL;
			}
			else{
			struct node *temp;
				struct node *ptr=head,*tem1=head;
			temp=(struct node* )malloc(sizeof(struct node));
	        temp->e=ele;
	        temp->next=NULL;
			printf("1.At head\t2.At Nth node \t3.At tail\t4.Before node 5.After Node\t6.Before Element\t7.After Element\n");
			scanf("%d",&op);
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
								temp->next=ptr;
								while(tem1->next!=ptr)
									tem1=tem1->next;
								tem1->next=temp;
								break;
					case 3: while(ptr->next!=NULL)
								ptr=ptr->next;
								ptr->next=temp;
								temp->next=NULL;
								break;
					case 4:printf("Enter the Node that u want to insert an element Before tht Node\n");
								scanf("%d",&n);
								while(i<n-1){
									ptr=ptr->next;
									i++;
									}
								temp->next=ptr;
								while(tem1->next!=ptr)
									tem1=tem1->next;
								tem1->next=temp;
								break;
					case 5:printf("Enter the Node that u want to insert an element After That Node\n");
								scanf("%d",&n);
								while(i<n+1){
									ptr=ptr->next;
									i++;
									}
								temp->next=ptr;
								while(tem1->next!=ptr)
									tem1=tem1->next;
								tem1->next=temp;
								break;
					case 6:printf("Enter ELement You Want to Search\n");
								scanf("%d",&s);
								while(tem1!=NULL){
								if(tem1->e==s){
								i=2;
								break;
								}
								else
									tem1=tem1->next;
								}
								if(i==2){
								temp->next=tem1;
								while(ptr->next!=tem1)
										ptr=ptr->next;
									ptr->next=temp;
									break;
					case 7: printf("Enter ELement You Want to Search\n");
								scanf("%d",&s);
								while(tem1!=NULL){
								if(tem1->e==s){
								i=2;
								break;
								}
								else
									tem1=tem1->next;
								}
								if(i==2){
								temp->next=tem1->next;
								tem1->next=temp;
								}
								else
								printf("Not FOund\n");
								break;
				}
		}
}
}
 void delete()
 {
 		int op,n,i=1,s;
 		if(head==NULL)
 			printf("NoT PoSsIbLe\n");
 		else
 		{
 			struct node *ptr=head,*tem1=head,*tem2=head;
			printf("1.At head\t2.At Nth node 3.At tail\t4.Before node\t 5.After node\t6.Before Element\t7.After ELement\n");
			scanf("%d",&op);
					switch(op)
					{
					case 1:head=head->next;
	 							break;
	 				case 2:printf("Enter the Node that u want to delete an element>1\n");
								scanf("%d",&n);
								while(i<n){
									ptr=ptr->next;
									i++;
									}
								while(tem1->next!=ptr)
									tem1=tem1->next;
									tem1->next=ptr->next;
	 							break;
	 				case 3:while(ptr->next!=NULL)
										ptr=ptr->next;
								struct node *temp1=head;
								while(temp1->next!=ptr)
										temp1=temp1->next;
								temp1->next=NULL;
								break;
					case 4:	printf("Enter the Node that u want to delete an element>1\n");
								scanf("%d",&n);
								while(i<n-1){
									ptr=ptr->next;
									i++;
									}
								while(tem1->next!=ptr)
									tem1=tem1->next;
									tem1->next=ptr->next;
								break;
					case 5:	printf("Enter the Node that u want to delete an element>1\n");
								scanf("%d",&n);
								while(i<n+1){
									ptr=ptr->next;
									i++;
									}
								while(tem1->next!=ptr)
									tem1=tem1->next;
									tem1->next=ptr->next;
								break;
					case 6:printf("Enter ELement You Want to Search\n");
								scanf("%d",&s);
								while(tem1!=NULL){
								if(tem1->e==s){
								i=2;
								break;
								}
								else
									tem1=tem1->next;
								}
								if(i==2){
									while(ptr->next!=tem1)
											ptr=ptr->next;
									while(tem2->next!=ptr)
											tem2=tem2->next;
									tem2->next=tem1;
									}
								else
									printf("Element NoT FoUnD\n");
								break;
					case 7:printf("Enter ELement You Want to Search\n");
								scanf("%d",&s);
								while(tem1!=NULL){
								if(tem1->e==s){
															i=2;
															break;
														}
								else
									tem1=tem1->next;
								}
								if(i==2){
											tem1->next=tem1->next->next;
											}
								else
									printf("Element NoT FoUnD\n");
									break;
					}
		}
}
 
void print()
 {
 	 	struct node *tem=head;
 	 	printf("List is :-\n");
 	 	while(tem!=NULL)
 	 	{
 	 		printf(" %d",tem->e);
 	 		tem=tem->next;
 	 	}
 	 	printf("\n");
 	 }			
int count()
{
		int i=0;
		struct node *ptr=head;
		while(ptr!=NULL){
				ptr=ptr->next;
				i++;
				}
		return i;
}		
void find()
{	
		int s,i=0;
		struct node *tem1=head;
		printf("Enter ELement You Want to Search\n");
		scanf("%d",&s);
		while(tem1!=NULL){
			if(tem1->e==s){
								i=1;
								break;
								}
			else
				tem1=tem1->next;
				}
			if(i==1)
					printf("Element FOund\n");		
			else
					printf("ELement Not Found\n");
}













	

