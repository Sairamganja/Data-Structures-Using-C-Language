			//*/ Stack Application-2 (Evaluation of any Postfix Operation) /*
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
int pop(struct stack *s)
{
     return s->a[(s->top)--]-'0'; 
}      
void operat(struct stack *s,char c)
{
   int i,j,k;
   switch(c)
   {
      case '+':
      		i=pop(s)+pop(s);
      		push(s,i+'0');
      		break;
      case '-':
      		i=pop(s);
      		j=pop(s);
      		k=j-i;
      		push(s,k+'0');
      		break;
      case '*':
      		i=pop(s)*pop(s);
      		push(s,i+'0');
      		break;
      case '/':
      		i=pop(s);
      		j=pop(s);
      		k=j/i;
      		push(s,k+'0');
      		break;
   }
}      						      	            
int main()
{
   struct stack s;
   s.top=-1;
   s.max=100;
   printf("\n\t*/ Stack Application-2 (Evaluation of any Postfix Operation) /*\n");
   char c[100];
   printf("\nEnter any Postfix operation : ");
   scanf("%s",c);
   int i;
   for(i=0;i<strlen(c);i++)
   {
      if(isalnum(c[i]))
      {
        if( (c[i]>='A' && c[i]<='Z') || (c[i]>='a' && c[i]<='z') )
        {
          printf("Enter value of %c : ",c[i]);
          scanf("%c",&c[i]);
        }
        push(&s,c[i]);
      }  
      else
        operat(&s,c[i]);
   }
   printf("Ans = %d.\n\n",pop(&s));
}    
   
