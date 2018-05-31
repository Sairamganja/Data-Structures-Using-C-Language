//Binary tree 
#include<stdio.h>
#include<stdlib.h>
struct Tnode{
		int e;
		struct Tnode* left;
		struct Tnode* right;
	};
	struct Queue {
		struct Tnode* data[100];
		int rear;
		int front;
		int max;
	};
	struct Tnode* root=NULL;
struct Tnode *insert(struct Tnode *root);
void find(struct Tnode *root);
int isempty(struct Queue *Q);
void enqueue(struct Queue *Q,struct Tnode *root);
struct Tnode* dequeue(struct Queue *Q);

void enqueue(struct Queue *Q,struct Tnode *root)
{
		if((Q->rear+1)==Q->max)
			printf("Queue is full\n");
		else
		{
				(Q->rear)++;
				Q->data[Q->rear]=root;
		}
}
struct Tnode *dequeue(struct Queue *Q)
{
		if(Q->front==Q->rear)
			printf("Queue is empty\n");
		else
		{
		return Q->data[++Q->front];
		}
}	
int isempty(struct Queue *Q)
{
		if(Q->rear==Q->front)
		return 0;
		else
		return 1;
}
struct Tnode *insert(struct Tnode *root)
{
		int ele;
		printf("Enter Element that u want to insert \n");
		scanf("%d",&ele);
		if(root==NULL)	{
				root=(struct Tnode*)	malloc(sizeof(struct Tnode));
				root->e=ele;
				root->left=root->right=NULL;
		}
		else{
				struct Queue *Q;
				Q=(struct Queue*)malloc(sizeof(struct Queue));
				Q->front=Q->rear=-1;
				Q->max=100;
				enqueue(Q,root);
				struct Tnode *temp;
					while(isempty(Q))
					{
						temp=dequeue(Q);
						if(temp->left!=NULL)
						enqueue(Q,temp->left);
						else {
							 	struct Tnode *temp1;
							 	temp1=(struct Tnode*)malloc(sizeof(struct Tnode));
							 	temp1->e=ele;
							 	temp1->left=temp1->right=NULL;
						    	temp->left=temp1;
						    	}
						if(temp->right!=NULL)
							enqueue(Q,temp->right);
						else{
								struct Tnode *temp1;
								temp1=(struct Tnode*)malloc(sizeof(struct Tnode));
								temp1->e=ele;
								temp1->left=temp1->right=NULL;	
								temp->right=temp1;
								}
					}
				}
				return root;
	}	
void find(struct Tnode* root)
{
		int ele;
		printf("Enter Element u want to search\n");
		scanf("%d",&ele);
		if(root==NULL)
		printf("The tree is Empty\n");
		else{
				struct Queue *Q;
				Q=(struct Queue *)malloc(sizeof(struct Tnode));
				Q->front=Q->rear=-1;
				Q->max=100;
				enqueue(Q,root);
				struct Tnode* temp;
					while((isempty(Q)))
					{
						temp=dequeue(Q);
						if(temp->e==ele)
							break;
						else{
								if(temp->left!=NULL)
										enqueue(Q,temp->left);
							if(temp->right!=NULL)
										enqueue(Q,temp->right);
								}
					}
					if(temp->e==ele)
							printf("Element is found\n");
					else
							printf("Element not found\n");
				}
}	
int main()
{	
		int op;
	do
		{
				printf("\t\t\t***Choose any Option***\n");
				printf("\t1.Insert 2.find \t3.Exit \n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:root=insert(root);
								break;
					case 2:find(root);
								break;
					case 3: break;
					default: printf("\n***Invalid Choice***\n");
				}
	   }while(op!=3);
}


		
		
		
		
		
		
		
		
		
		
		
		
		
		
