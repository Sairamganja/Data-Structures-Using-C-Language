#include<stdio.h>
void enque();
int deque();
 struct queue
{
int data[100];
int rear;
int front;
int max;
};
struct queue s;

void main()
	{
	s.front=-1;
s.rear=-1;
		s.max=100;

	int choice,k;
	do
	{
		printf("Enter the  choice\n");
		scanf("%d",&choice);
				switch(choice)
				{
					case 1:	enque();break;
					case 2: k=deque();
								 	printf("Deleted frm queue is %d",k);
								break;
					case 3: break;
					default:	printf("***Invalid OPtion***");
									break;
					}
		}while(choice!=3);
}

void enque()
{
		int element;
		if((s.rear+1)==s.max)
		{
			printf("Queue is full\n");
		}
		else
		{
				printf("Enter any element\n");
				scanf("%d",&element);
				(s.rear)++;
				s.data[s.rear]=element;
		}
}

int deque()
{
		if(s.front==s.rear)
		{
			printf("Queue is empty\n");
			
		}
		else
		{	
		(s.front)++;
		return s.data[s.front];
		}
}	



