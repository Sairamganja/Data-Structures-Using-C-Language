#include<stdio.h>
#define MAX 10
void push();
int pop();
void display();
 struct stack
{
int data[10];
int top;
};
struct stack s;
 main()
{

	s.top=-1;
	int choice,k;
	do
	{
		printf("Enter the  choice\n");
		scanf("%d",&choice);
				switch(choice)
				{
					case 1:	push(s);
					             break;
					case 2: k=pop(s);
								if(k!=141533)
								{
								 	printf("this is removed %d\n",k);
								}
								break;
					case 3: display(s);
								break;
					default:	printf("***Invalid OPtion***");
									break;
					}
		}while(choice!=4);
}

void push()
{
		int element;
		if((s.top+1)==MAX)
		{
			printf("Stack is full\n");
		}
		else
		{
				printf("Enter any element\n");
				scanf("%d",&element);
				s.top++;
				s.data[s.top]=element;
		}
}

int pop()
{
		if(s.top==-1)
		{
			printf("Stack is empty\n");
			return 141533;
		}
		else
		{	
		return s.data[(s.top)--];
		}
}	


