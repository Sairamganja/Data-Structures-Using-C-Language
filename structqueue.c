#include<stdio.h>
 struct queue
{
int data[100];
int rear;
int front;
int max;
};
void enque(struct queue*);
int deque(struct queue*);


void main()
	{
struct queue *s1;
struct queue s;
s1=&s;


	s1->front=-1;
s1->rear=-1;
		s1->max=100;

	int choice,k;
	do
	{
		printf("Enter the  choice\n");
		scanf("%d",&choice);
				switch(choice)
				{
					case 1:	enque(s1);break;
					case 2: k=deque(s1);
								 	printf("Deleted frm queue is %d",k);
								break;
					case 3: break;
					default:	printf("***Invalid OPtion***");
									break;
					}
		}while(choice!=3);
}

void enque(struct queue *s1)
{
		int element;
		if((s1->rear+1)==s1->max)
		{
			printf("Queue is full\n");
		}
		else
		{
				printf("Enter any element\n");
				scanf("%d",&element);
				(s1->rear)++;
				s1->data[s1->rear]=element;
		}
}

int deque(struct queue *s1)
{
		if(s1->front==s1->rear)
		{
			printf("Queue is empty\n");
			
		}
		else
		{	
		(s1->front)++;
		return s1->data[s1->front];
		}
}	



