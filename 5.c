#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
int s[MAX],top=-1;
void push(int s[],int val);
int pop(int s[]);
int peek(int s[]);
void display(int s[]);
int main()
{
   int val,option;
   do
   {
     printf("\n****** MAIN MENU********");
     printf("\n 1: PUSH");
     printf("\n 2: POP");
     printf("\n 3: PEEK");
     printf("\n 4: DISPLAY");
     printf("\n 5: EXIT");
     printf("\n Enter Your option :");
     scanf("%d",&option);
     switch(option)
     {
	case 1: printf("\n Enter the Number to be pushed on stack");
		scanf("%d",&val);
		push(s,val);
		break;
	case 2:
		val=pop(s);
		if(val !=-1)
		printf("\n The value deleted from stack is : %d",val);
		break;
	case 3:
		val=peek(s);
		if(val !=-1)
		printf("\n The value stored at top of stack is : %d",val);
		break;
	case 4: display(s);
		break;
      }
  }while(option != 5);
  return 0;
}
void push (int s[],int val)
{
  if(top==MAX-1)
  {
     printf("\n STACK OVERFLOW");
  }
  else
  {
    top++;
    s[top]=val;
  }
}
int pop(int s[])
{
   int val;
   if(top == -1)
   {
     printf("\n STACK UNDERFLOW");
     return -1;
   }
   else
   {
      val=s[top];
      top--;
      return val;
   }
}
int peek(int s[])
{
   if(top == -1)
   {
     printf("\n STACK UNDERFLOW");
     return -1;
   }
   else
      return (s[top]);
}
void display(int s[])
{
  int i;
  if(top == -1)
   {
     printf("\n STACK EMPTY");
   }
   else
   {
      for(i=top;i>=0;i--)
	printf("\n %d\n",s[i]);
   }
}
