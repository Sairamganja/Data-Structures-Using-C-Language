#include<stdio.h>
int enqueue(int a[],int *r,int f,int *k);
int dequeue(int a[],int r,int *f,int *k);
#define MAX 100
int main()
{
int f=-1,r=-1,op,a[100],k=0,p;
	do
	{
		printf("\t\t1)que\t\t 2)deque\t\t 3)exit\n");
		printf("*****__Choose Any thing__*****\n");	
		scanf("%d",&op);
			switch(op)
			{
			case 1:
				enqueue(a,&r,f,&k);
				break;
			case 2:p=dequeue(a,r,&f,&k);
				if(p!=141533)
				{
				printf("the dequed value is %d\n",p);				
				}				
				else 	
				{
				printf("que is empty\n");
				}
				break;
			case 3:
				break;
			default:
				printf("invalid option\n");
				break;
			}
	}while(op!=3);
}
int enqueue(int a[],int *r,int f,int *k)
{
	int ele;	
		if((*r)==f&&(*k)==1)
			{
				printf("que is full\n");
			}
		else
			{
				if((*r+1)!=MAX)
				{
					(*r)++;					
					printf("enter u r elements\n");
					scanf("%d",&ele);
					a[*r]=ele;
						
						{				
							 if((*r)==f)
								{
									(*k)=1;
								}
						}
				}
			}
}
int dequeue(int a[],int r,int *f,int *k)	
{
	if((*f)==r&&(*k)==0)
	{
		
		return 141533;	
	}
	else
	{
		if((*f+1)!=MAX)
		{
			(*f)++;
			return a[*f--];
		{
			if(*f==r)
			{
				(*k)=-1;
			}
		}
		}
	}
	
}		
