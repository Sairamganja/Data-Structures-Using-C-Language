#include<stdio.h>
void enqueue(int a[],int *r,int max);
int dequeue(int a[],int *f,int r);
int main()
{
	int a[100],r= -1,f=-1,k,max=100,op;
	printf("\t\n******$$*********This program is for Queue********$$**********\n");
		do
		{
				printf("\t***Choose any Option***\n");
				printf("\n\t1.Enqueue\n  \n\t2.Dequeue\n   \n\t3.Exit\n");
				scanf("%d",&op);
				switch(op)
				{
					case 1:enqueue(a,&r,max);
							break;
					case 2 : k= dequeue(a,&f,r);
								if(k!=141533)
								{
								printf("The Dequeued out value is %d\n",k);
								}
								break;
					case 3: break;
					default: printf("\n***Invalid Choice***\n");
								 printf("\n*** Think About it ***\n");
				}
	   }while(op!=3);
}
	
			void enqueue(int a[],int *r,int max)
			{
				int ele;
				if((*r+1)==max)
				{
					printf("\t***Queue is fulll***\n");
				}
				else
				{
					printf("Enter the Element u want to Enqueue\n");
					scanf("%d",&ele);
					(*r)++;
					a[*r]=ele;
				}
				
			}
				int dequeue(int a[],int *f,int r)
			{
				if(*f==r)
				{
					printf("\n\t***Queue is Empty***\n");
					return 141533;
				}
				else
				{
				return a[++(*f)];
				}
			}
					
		
						
	
		
					
		
						
	
