//Double Linked list for insertion and Deletion 
#include<stdio.h>
#include<stdlib.h>
void  insert();
int delete();
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
				printf("\t1.Insert \t2.Delete \t3.print\t4.Exit \n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:insert();
							break;
					case 2:delete();
								break;
					case 3: print();
								break;
					case 4: break;
					default: printf("\n***Invalid Choice***\n");
								 printf("\n*** Think About it ***\n");
				}
	   }while(op!=4);
}
 	void insert()
	{
			int ele,i=1,n,op,j,s;
			if(head==NULL)
			{
				printf("Enter Element\n");
				scanf("%d",&ele);
				head= (struct node* )malloc(sizeof(struct node));
				head->e=ele;
				head->next=NULL;
				head->prev=NULL;
				}
			else
			{
				struct node* temp,*ptr=head,*tem1=head,*tem2=head;
		   	    temp=(struct node* )malloc(sizeof(struct node));
				printf("Enter Element\n");
				scanf("%d",&ele);
				temp->e=ele;
				printf("1.Head\t2.Tail\t3.Nth node\t4.Before Nth node \t5.After Nth node\t6.Before element\t7.After  Element\n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:	temp->prev=NULL;
								temp->next=head;
								while(ptr->next!=NULL)
										ptr=ptr->next;
								ptr->prev=temp;
								head=temp;
								break;
					case 2: 	while(ptr->next!=NULL)
										ptr=ptr->next;
								ptr->next=temp;
								while(tem1->next!=temp)
								tem1=tem1->next;
								temp->prev=tem1;
								temp->next=NULL;
								break;
					case 3:printf("Enter the Node where u want to place a new node\n");
								scanf("%d",&n);
								while(i<n){
									ptr=ptr->next;
										i++;
									}
									temp->next=ptr;
								while(tem1->next!=ptr)
									tem1=tem1->next;
									tem1->next=temp;
								while(tem2->next!=tem1)
										tem2=tem2->next;
									temp->prev=tem2;
								break;
					case 4: printf("Enter the Node where u want to place a new node before it\n");
								scanf("%d",&n);
								while(i<n-1){
									ptr=ptr->next;
										i++;
									}
									temp->next=ptr;
								while(tem1->next!=ptr)
									tem1=tem1->next;
									tem1->next=temp;
								while(tem2->next!=tem1)
										tem2=tem2->next;
									temp->prev=tem2;
								break;
					case 5: printf("Enter the Node where u want to place a new node after it\n");
								scanf("%d",&n);
								while(i<n+1){
									ptr=ptr->next;
										i++;
									}
									temp->next=ptr;
								while(tem1->next!=ptr)
									tem1=tem1->next;
									tem1->next=temp;
								while(tem2->next!=tem1)
										tem2=tem2->next;
									temp->prev=tem2;
								break;
					case 6:printf("Enter the element that u want to search and insert ele before it\n");
								scanf("%d",&s);
								 while(tem1!=NULL){
								if(tem1->e==s){	
															j=1;
															break;
															}
								else
												tem1=tem1->next;
									}
									if(j==1){
									temp->next=tem1;
									while(ptr->next!=tem1)
											ptr=ptr->next;
									ptr->next=temp;
									while(tem2->next!=ptr)
											tem2=tem2->next;
										temp->prev=tem2;
									}
									else
											printf("Element Not Found\n");
									break;
					case 7: printf("Enter the element that u want to search and insert ele After it\n");
								scanf("%d",&s);
								 while(tem1!=NULL){
								if(tem1->e==s){	
															j=1;
															break;
															}
								else
												tem1=tem1->next;
									}
								if(j==1){
									temp->next=tem1->next;
									tem1->next=temp;
									while(ptr->next!=tem1)
											ptr=ptr->next;
									temp->prev=ptr;
									break;
									}
								else
										printf("Element Not Found\n");
					}
		}
}
int delete()
	{
		int op,i=1,n,s,j;
		struct node *ptr=head,*tem1=head,*tem2=head,*tem3=head;
		if(head==NULL)
			printf("Deletion Not Possible\n");
		else{
				printf("1.Head\t2.Tail\t3.Nth node\t4.Before Nth node \t5.After Nth node\t6.Before element\t7.After  Element\n");
				scanf("%d",&op);
				switch(op)
				{
					case 1: head=head->next;
								head->prev=NULL;
								break;
					case 2:while(ptr->next!=NULL)
									ptr=ptr->next;
								while(tem1->next!=ptr)
										tem1=tem1->next;
								tem1->next=NULL;
								break;
					case 3:printf("Enter The node\n");
								scanf("%d",&n);
								while(i<n){
									ptr=ptr->next;
									i++;
									}
								while(tem1->next!=ptr)
										tem1=tem1->next;
								tem1->next=ptr->next;
								while(tem2->next!=tem1)
									tem2=tem2->next;
								ptr->next->prev=tem2;
								break;
					case 4:printf("Enter The node\n");
								scanf("%d",&n);
								while(i<n-1){
									ptr=ptr->next;
									i++;
									}
								while(tem1->next!=ptr)
										tem1=tem1->next;
								tem1->next=ptr->next;
								while(tem2->next!=tem1)
									tem2=tem2->next;
								ptr->next->prev=tem2;
								break;
					case 5:printf("Enter The node\n");
								scanf("%d",&n);
								while(i<n+1){
									ptr=ptr->next;
									i++;
									}
								while(tem1->next!=ptr)
										tem1=tem1->next;
								tem1->next=ptr->next;
								while(tem2->next!=tem1)
									tem2=tem2->next;
								ptr->next->prev=tem2;
								break;
					case 6:printf("Enter the element that u want to search and delete ele Before it\n");
								scanf("%d",&s);
								 while(tem1!=NULL){
								if(tem1->e==s){	
															j=1;
															break;
															}
								else
												tem1=tem1->next;
									}
								if(j==1){
								while(ptr->next!=tem1)
									ptr=ptr->next;
								while(tem2->next!=ptr)
									tem2=tem2->next;
								tem2->next=ptr->next;
								while(tem3->next!=tem2)
									tem3=tem3->next;
								ptr->next->prev=tem3;
								}
								else
								printf("element Not Found\n");
								break;
					case 7: printf("Enter the element that u want to search and delete ele After it\n");
								scanf("%d",&s);
								 while(tem1!=NULL){
								if(tem1->e==s){	
															j=1;
															break;
															}
								else
												tem1=tem1->next;
									}
								if(j==1){
								ptr=tem1->next;
								while(tem2->next!=tem1)
									tem2=tem2->next;
								ptr->next->prev=tem2;
								tem1->next=tem1->next->next;
								}
								else
								printf("ELement Not Found\n");
								break;
						}	
 }
}
void print()
 {
 		int a,b,i=1;
 	 	struct node *temp=head;
		printf("Starting node :");
		scanf("%d",&a);
		printf("Ending Node :");
		scanf("%d",&b);
		while(i<a){
			temp=temp->next;
			i++;
			}
		while(temp!=NULL){	
 	 		if(a<=b){
 	 		printf(" %d",temp->e);
 	 		temp=temp->next;
 	 		a++;
 	 		}
 	 		else
 	 		break;
 	 	}
 	 	printf("\n");
  }
