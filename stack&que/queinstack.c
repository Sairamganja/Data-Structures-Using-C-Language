#include<stdio.h>
#include<stdlib.h>
struct stack 
{
	int a[100];
	int top;
	int max;
}s2;
void n_queue(struct stack *s1);
int d_queue(struct stack *s1);
void main()
{
	struct stack *s1;
	s1=(struct stack*)malloc(sizeof(struct stack));
	s1->top=-1;
	s1->max=100;
		int op,k;
		do
		{
			printf("Enter Ur option \n");
			scanf("%d",&op);
			switch(op)
			{
				case 1: n_queue(s1);
							break;
				case 2: k=d_queue(s1);
							if(k!=0)
							printf("The deleted value is %d",k);
							break;
				case 3: break;
			}
		}while(op!=3);
}
void n_queue(struct stack *s1)
{
			int ele;			
			if(s1->top+1==s1->max)
			{
				printf("Is Full\n");
			}
			else
			{
				printf("Element\n");
				scanf("%d",&ele);	
				s1->top++;
				s1->a[s1->top]=ele;
			}
}

int d_queue(struct stack *s1)
{
			if(s1->top==-1)
			{
				printf("Empty\n");
			return 0;
			}
			else
			{
			s2.top=-1;
			s2.max=100;
			int i,j,k;
			for(i=s1->top;i>=0;i--)
			{s2.top++;
				s2.a[s2.top]=s1->a[i];
			}
		s1->top=i;
			k=s2.a[s2.top];
			for(j=s2.top-1;j>=0;j--)
			{
			s1->top++;
				s1->a[s1->top]=s2.a[j];
			}
		s2.top=j;
				return k;
	}
}

			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		
