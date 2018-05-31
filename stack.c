#include<stdio.h>
void push(int a[],int *top,int max);
int pop(int a[],int *top);
int display(int a[],int *top);
int main()
{
int a[100],top=-1,max=100;
int op,k;
do
{
printf("choose your option\n");
printf("     1.push\n     2.pop\n     3.exit\n      4.display\n");
scanf("%d",&op);
switch(op)
{
case 1:
    push(a,&top,max);
    break;
case 2:
    k=pop(a,&top);
    printf("pop=%d",k);
    break;
case 3:
    break;
case 4:
    display(a,&top);
    break;
default:
    printf("invalid");
}
}while(op!=3);
}
void push(int a[],int *top,int max)
{
    int ele;
    if((*top+1)==max)
    printf("stack is full");
    else
    {
    printf("enter element\n");
    scanf("%d",&ele);
    (*top)++;
    a[*top]=ele;
    }
}
int pop(int a[],int *top)
{
    if(*top==-1)
    {
        printf("stack is empty");
    }
    else
    { 
        return a[(*top)--];
    }    
}
int display(int a[],int *top)
{
      int i;
      for(i=0;i<=*top;i++)
      {
            printf("your elements = %d\n",a[i]);
      }
}
