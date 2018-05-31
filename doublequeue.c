#include<stdio.h>
#include<stdlib.h>
int main()
{
      int a[5],op,max=5,r1=-1,f1=-1,r2=max,f2=max,k=-1000,m=-1000;
      do
      {
            printf("          *******DOUBLE QUEUE INSERTION AND DELETION*******         \n");
            printf("      1.beginingins\n      2.endingins\n      3.beginingdel\n     4.endingdel\n     5.display\n     6.exit\n      ");
            printf("choose your option\n");
            scanf("%d",&op);
            switch(op)
            {
                  case 1:
                  beginingins(a,&r1,&r2,max);
                  break;
                  case 2:
                  endingins(a,&r2,&r1);
                  break;
                  case 3:
                  k=beginingdel(a,&f1,&f2,&r1,max,&r2);
                  if(k!=-1000)
                  printf("delete element = %d\n",k);
                  break;
                  case 4:
                  m=endingdel(a,&f2,&f1,&r2,&r1);
                  if(m!=-1000)
                  printf("delete element = %d\n",m);
                  break;
                  case 5:
                  display(a,&f2,&f1,&r2,&r1,max);
                  break;
                  case 6:
                  break;
                  default:
                  printf("invalid\n");
             }
       }while(op!=6);
}
int beginingins(int a[],int *r1,int *r2,int max)
{
      int ele;
      if(*r1+1==max||*r1+1==*r2)
      {
            printf("queue is full\n");
      }
      else
      {
            printf("enter your element\n");
            scanf("%d",&ele);
            a[++(*r1)]=ele;
      }
            
} 
int endingins(int a[],int *r2,int *r1)
{
      int ele;
      if(*r2-1==*r1||*r2-1==-1)
      {
            printf("queue is full\n");
      }
      else
      {
            printf("enter your element\n");
            scanf("%d",&ele);
            a[--(*r2)]=ele;
      }
            
} 
int beginingdel(int a[],int *f1,int *f2,int *r1,int max,int *r2)
{
     if(*f1+1==*f2||*f1==*r1)
     {
          printf("beging queue is empty\n");
          return -1000;
     }
     else
     {
          return a[++(*f1)];
     }
}
int endingdel(int a[],int *f2,int *f1,int *r2,int *r1)
{
      if(*f2-1==*f1||*f2==*r2)
      {
            printf("ending queue is empty\n");
            return -1000;
      }
      else
      {
            return a[--(*f2)];
      }
}
int display(int a[],int *f2,int *f1,int *r2,int *r1,int max)
{
      int i;
      printf("      **************************      \n");
      if(*f1+1==*f2||*f1==*r1)
      {
            printf("There is no begining elements\n");
      }
      if(*f2-1==*f2||*f2==*r2)
       {
            printf("There is no ending elements\n");
       }
      else
      {
            printf("      **************************      \n");
            for(i=*f1+1;i<=*r1;i++)
            {
                  printf("your beging elements = %d\n",a[i]);
            }
            printf("      **************************      \n"); 
            for(i=*f2-1;i>=*r2;i--)
            {       
                  printf("your ending elements = %d\n",a[i]);
            }
      }
}
