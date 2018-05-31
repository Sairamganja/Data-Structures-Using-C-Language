#include<stdio.h>
void push(int a[],int *top,int max);
int pop(int a[],int *top);
int main()
{
	int a[10],top= -1,k,max=10,op;
	printf("\t\n******$$*********This program is for STACK********$$**********\n");
		do
		{
				printf("\t***Choose any Option***\n");
				printf("\n\t1.Push\n  \n\t2.Pop\n   \n\t3.Exit\n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:push(a,&top,max);
							break;
					case 2:k= pop(a,&top);
								printf("The popped out value is %d\n",k);
								break;
					case 3: break;
					default: printf("\n***Invalid Choice***\n");
								 printf("\n*** Think About it ***\n");
				}
	   }while(op!=3);
}
	
			void push(int a[],int *top,int max)
			{
				int ele;
				if((*top+1)==max)
				{
					printf("\t***Stack is fulll***\n");
				}
				else
				{
					printf("Enter the Element u want to push\n");
					scanf("%d",&ele);
					(*top)++;
					a[*top]=ele;
				}
			}
			int pop(int a[],int *top)
			{
				if(*top==-1)
				{
					printf("\n\t***Stack is Empty***\n");
				}
				else
				{
				return a[(*top)--];
				}
			}
					
		
						
	
