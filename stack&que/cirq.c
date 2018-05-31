				// */ Circular QUEUE Implimentation \*
#include<stdio.h>
int k=0;
void enqueue(int a[],int *r,int f,int max)
{
   if(*r==f && k==1)
     printf("Queue is full.\n");
   else
   {
     if(*r+1==max)
     {
       if(f==-1)
         printf("Queue is full.\n");
       else
       {
         *r=0;
         if(*r==f)
           k=1;
         printf("Enter any element : ");
         scanf("%d",&a[*r]);
       }
     }
     else
     {
       (*r)++;
       if(*r==f)
         k=1;
       printf("Enter any element : ");
       scanf("%d",&a[*r]);
     }
   }
}
int dequeue(int a[],int r,int *f,int max)
{
   if(*f==r && k==0)
   {
     printf("Queue is empty.\n");
     return -1999978;
   }  
   else
   {
     if(*f+1==max)
     {
       if(r==-1)
       {
         printf("Queue is empty.\n");
         return -1999978;
       }  
       else
       {
         *f=0;
         if(r==*f)
           k=0;
         return a[*f];
       }
     }
     else
     {
       (*f)++;
       if(*f==r)
         k=0;
       return a[*f];
     }
   }  
}            
int main()
{
   int a[5],r=-1,f=-1,max=5,n,i;
   printf("\n\t*/ Circular Queue Implimentation /*\n");
   do
   {
      printf("\nThere are 3 choices.As\n1.ENQUEUE\n2.DEQUEUE\n3.Exit\nEnter ur choice : ");
      scanf("%d",&n);
      switch(n)
      {
         case 1:
         	 enqueue(a,&r,f,max);
         	 break;
         case 2:
         	 i=dequeue(a,r,&f,max);
         	 if(i!=-1999978)
         	   printf("%d is deleted.\n",i);
         	 break;
         case 3:
         	 break;
         default :
         	   printf("Choice doesn't exist.\n");
      }
   }while(n!=3);
}

          
