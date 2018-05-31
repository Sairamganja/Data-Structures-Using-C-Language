//Binary tree 
#include<stdio.h>
#include<stdlib.h>
struct Tnode{
		int e;
		struct Tnode* left;
		struct Tnode* right;
	};
struct Queue
{
	int data[100];
		int rear;
		int front;
		int max;
 };
struct Tnode *insert(struct Tnode* root);
struct Tnode *find(struct Tnode *root);
struct Tnode *print(struct Tnode *root);
void enqueue(struct Queue *Q,struct Tnode *e);
struct Tnode* dequeue(struct Queue *Q)
int main()
{	
			struct Tnode* root=NULL;
			int op;
	do
		{
				printf("\t\t\t***Choose any Option***\n");
				printf("\t1.Insert\t\t 2.find \t\t3.Exit \n");
				scanf("%d",&op);
				switch(op)
				{
					case 1 :root=insert(root);
								break;
					case 2 :find(root);
								break;
					case 3: print(root);
								break;
					case 4: break;
		   		default    : printf("\n***Invalid Choice***\n");
				}
	   }while(op!=4);
}
struct Tnode *insert(struct Tnode* root)
{
		int ele;
		printf("\tEnter Element that u want to insert\n");
		scanf("%d",&ele);
		if(root==NULL){
					root=(struct Tnode*)malloc(sizeof(struct Tnode));
					root->e=ele;
					root->left=root->right=NULL;
					}
			else{
					struct Tnode *temp=root;
					while(1)
					{
							if(ele>temp->e)
							{
								if(temp->right!=NULL)
									temp=temp->right;
								else{
										struct Tnode *temp1;
										temp1=(struct Tnode*)malloc(sizeof(struct Tnode));
										temp1->e=ele;
										temp1->left=temp1->right=NULL;
										temp->right=temp1;
										break;
										}
								}
								else{
										if(temp->left!=NULL)
												temp=temp->left;
										else{
												struct Tnode *temp1;
												temp1=(struct Tnode*)malloc(sizeof(struct Tnode));
												temp1->e=ele;
												temp1->right=temp1->left=NULL;
												temp->left=temp1;
												break;
												}//else
										}//else
						}//while
			}//else
			return root;
		}
	struct Tnode *find(struct Tnode *root)
	{
				int ele;
				printf("\tEnter element that u want to search\n");
				scanf("%d",&ele);
				if(root==NULL){
					printf("\tTree is Empty\n");
					return NULL;
					}
				else{
						struct Tnode *temp=root;
						while(1)
						{
								if(ele==temp->e){
									printf("\tElement is found\n");
									return NULL;
								}
								else if(ele>temp->e){
									if(temp->right!=NULL)
										temp=temp->right;
									else{
										printf("\tElement Not Found\n");
										return NULL;
											}
								}
								else{
										if(temp->left!=NULL)
												temp=temp->left;
										else{
												printf("\tElement is Not Found\n");
												break;
												}
										}//else
						}//while
				}//else
}//function

struct Tnode *print(struct Tnode *root);
{
		int ele;
		printf("Enter Element u want to search\n");
		scanf("%d",&ele);
		if(root==NULL)
		printf("The tree is Empty\n");
		else{
				struct Queue *Q;
				Q=(struct Queue *)malloc(sizeof(struct Queue));
				Q->front=Q->rear=-1;
				Q->max=100;
				enqueue(Q,root);
				struct Tnode* temp;
					while(!isempty(Q))
					{
						temp=dequeue(Q);
						if(temp!=NULL)
							printf("%d",temp->ele);
						else{
								if(temp->left!=NULL)
										enqueue(Q,temp->left);
								if(temp->right!=NULL)
										enqueue(Q,temp->right);
								}
					}
				}
}	
void enqueue(struct Queue *Q,struct Tnode *e)
{
		if((Q->rear+1)==Q->max)
			printf("Queue is full\n");
		else
		{
				(Q->rear)++;
				Q->data[Q->rear]=e;
		}
}
struct Tnode* dequeue(struct Queue *Q)
{
		if(Q->front==Q->rear)
			printf("Queue is empty\n");
		else
		{	
		(Q->front)++;
		return Q->data[Q->front];
		}
}	
int isempty(struct Queue *Q)
{
		struct Queue *Q;
		Q=(struct Queue*)malloc(sizeof(struct Queue));
		Q->front=Q->rear=-1;
		Q->max=100;
		if(
							
							
							
							
							
							
							
							
							
							
							
							
							
							
