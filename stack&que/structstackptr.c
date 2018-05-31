#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void push(struct stack *s1);
int pop(struct stack *s1);
 struct stack
{
int data[10];
int top;
};
void main()
{
	struct stack *s1;
	struct stack s;
	s1=&s;
	s1->top=-1;
	int choice,k;
	do
	{
		printf("Enter the  choice\n");
		scanf("%d",&choice);
				switch(choice)
				{
					case 1:	push(s1);
					             break;
					case 2: k=pop(s1);
								if(k!=141533)
								{
								 	printf("this is removed %d\n",k);
								}
								break;
					case 3: break;
					default:	printf("***Invalid OPtion***");
									break;
					}
		}while(choice!=3);
}

void push(struct stack *s1)
{
		int element;
		if((s1->top+1)==MAX)
		{
			printf("Stack is full\n");
		}
		else
		{
				printf("Enter any element\n");
				scanf("%d",&element);
				s1->top++;
				s1->data[s1->top]=element;
		}
}

int pop(struct stack *s1)
{
		if(s1->top==-1)
		{
			printf("Stack is empty\n");
			return 141533;
		}
		else
		{	
		return s1->data[(s1->top)--];
		}
}	



