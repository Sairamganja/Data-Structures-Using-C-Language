			//Stack Application-1 (Conversion of Infix to Postfix)
#include<stdio.h>
#include<string.h>
struct stack
{
   int a[100],top,max;
};
void push(struct stack *s,char c)
{
   if(s->top+1==s->max)
     printf("Stack is full.\n");
   else
     s->a[++(s->top)]=c;    
}
char pop(struct stack *s)       
{
     return s->a[(s->top)--];
} 
char top(struct stack *s)
{
    return s->a[s->top];
}
int prior(char c)
{
   if(c=='(')
     return 0;
   else if(c=='+' || c=='-')
     return 1;
   else if(c=='*' || c=='/')
     return 2;
   else
     return 3;
}      
int main()
{
   int k;
   struct stack s;
   s.top=-1;
   s.max=100;
   printf("\n\t*/ Stack Application-1 (Conversion of Infix to Postfix) /*\n");
   int n,i;
   char c[100];
   printf("\nEnter any operation : ");
   scanf("%s",c);
   printf("%s Postfix Conversion is : ",c);
   for(i=0;i<strlen(c);i++)
   {
   	if(c[i]=='(')
   	  push(&s,c[i]);
   	else if(c[i]==')')
   	{
   	  while(top(&s)!='(')
   	    printf("%c",pop(&s));
   	  k=pop(&s);
   	}
   	else if(isalnum(c[i]))
   	    printf("%c",c[i]);
   	else if(prior(c[i])>prior(top(&s)) || s.top==-1)
   	    push(&s,c[i]);
   	else
   	{
   	   while(s.top!=-1 && prior(c[i])<=prior(top(&s)) )              
      	       printf("%c",pop(&s));
      	       push(&s,c[i]);
      	}
    }
    if(s.top!=-1)
    {
       while(s.top+1)
         printf("%c",pop(&s));
    }     
    printf("\n\n");
} 


         	
              
