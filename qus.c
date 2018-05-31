 //Queue implimentation using Stacks
#include<stdio.h>
int i=0;
struct stack
{
   int a[5];
   int top;
   int max;
};
int enqueue(struct stack *s1,struct stack *s2)
{
   int el,e;
   if(s1->top+1==s1->max)
     printf("Queue is full.\n");
   else
   {
     printf("Enter any element : ");
     scanf("%d",&el);
     if(s2->top==-1)
       push(s1,el);
     else
     {
       while(s2->top!=-1)
       {
          e=pop(s2);
          push(s1,e);
       }
       push(s1,el);
     } 
   }    
}
int dequeue(struct stack *s1,struct stack *s2)
{
   int e,d;
   if(s1->top==-1)
   {
     d=pop(s2);
     if(i!=1)
       printf("%d is Deleted.\n",d);
   }    
   else
   {
     while(s1->top!=-1)
     {
        e=pop(s1);
        push(s2,e);
     }
     d=pop(s2);
     if(i!=1)
       printf("%d is Deleted.\n",d);
   }
}
int push(struct stack *s,int x)
{ 
     s->a[++(s->top)]=x;
}
int pop(struct stack *s)
{
   if(s->top==-1)
   {
     i=1;
     printf("Queue is empty.\n");
   }  
   else
   {
     i=0;
     return s->a[(s->top)--];
   }  
}
int main()
{
   int n,i;
   struct stack s1,s2;
   s1.top=-1;
   s1.max=5;
   s2.top=-1;
   s2.max=5;
   printf("\n\tQueue Implimentation using Stacks\n");
   do
   {
      printf("\nThere are 3 choices.As\n1.Enqueue\n2.Dequeue\n3.EXIT\nEnter ur choice : ");
      scanf("%d",&n);
      switch(n)
      {
         case 1:
         	 enqueue(&s1,&s2);
         	 break;
         case 2:
         	 dequeue(&s1,&s2);
         	 break;
         case 3:
         	 break;
         default :
         	   printf("Choice doesn't exist.\n");
      }
   }while(n!=3);
}    



