#include<stdio.h>
#include<stdlib.h>
int *st,cap,top=-1;
int push(int x)
{
	if(top==cap-1)
	{
		cap=2*cap;
		st=(struct node*)realloc(st,cap*sizeof(int));
		printf("\ncapacity is enhanced\n");
	}
	top++;
	st[top]=x;
}


int pop()
{
	if(top==-1)
		printf("stack is empty\n");
	else
		return st[top--];
}



int peek()
{
	if(top==-1)
		printf("stack is empty\n");
	else 
		printf("%d is the top element\n",st[top]);
}


void display()
{
	if(top==-1)
		printf("stack is empty\n");
	else
	{
		printf("stack elements are:\n");
		for(int=i;i>=0;i--)
			st[i];
	}
}


int main()
{
	int ch,x;
	printf("\nMENU\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
	printf("enter your choice:\n");
	scanf("%d\n",&ch);
	while(1)
	{
		struct node :*nn=(struct node*)malloc(cap*sizeof(int));
		printf("capacity is enhanced\n");
		st[top]=x;


		switch(ch)
		{
			case 1:printf("element to be pushed:\n");
			       scanf("%d\n",&x);
			       push(x);
			       break;
			case 2:pop(x);
			       printf("%d element is popped\n",x);
			       break;
			case 3:peek();
			       printf("the top element is %d",x);
			       break;
			case 4:display();
			       break;
			case 5:exit(0);
		}
	}
}
