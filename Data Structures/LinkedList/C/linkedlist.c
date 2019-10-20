#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list *next;
}*start=NULL;

void createlist()
{
	int x;
	struct list *t= (struct list *)malloc(sizeof(struct list));
	if(start==NULL)
	{
		printf("enter\n");
		scanf("%d",&x);
		t->data=x;
		t->next=NULL;
		start=t;
	}	
	else
	{
		printf("List is created\n");

	}
}

void addbeg(int x)
{
	struct list *t=(struct list *)malloc(sizeof(struct list));
	t->data=x;
	t->next=start;
	start=t;

}

void delbeg()
{
	struct list *t;
	if(start==NULL)
	{
		printf("Empty List\n");

	}
	else{
		t=start;
		printf("%3d",t->data);
		start=start->next;
		free(t);

	}
}

void display()
{
	struct list *t;
	if(start==NULL)
	{
		printf("Empty List\n");

	}
	else
	{
		t=start;
		while(t!=NULL)
		{
			printf("%3d\n",t->data);
			t=t->next;
		}
	}
}


void addend(int x)
{
	struct list *q;
	struct list *t=(struct list *)malloc(sizeof(struct list));
	t->data=x;
	t->next=NULL;
	if(start==NULL)
	{
		start=t;

	}
	else{
		q=start;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=t;
	}
}


void delend()
{
	struct list *t,*p,*q;
	if(start==NULL)
	{
		printf("Empty List\n");

	}
	else if(start->next==NULL)
	{
		t=start;
		printf("%3d to be deleted\n",t->data);
		free(t);
		start==NULL;
	}
	else{
		p=start;
		while(p->next!=NULL)
		{
			q=p;
			p=p->next;

		}
		printf("%3d to be deleted\n",p->data);
		q->next=NULL;
		free(p);


	}


}


void main()
{
	while(1)
	{
		int x,n;
		
		printf("1.Create a List\n");
		printf("2.Add Beginning\n");
		printf("3.Add End\n");
		printf("4.Delete Beginning\n");
		printf("5.Delete End\n");
		printf("6.Display\n");
		printf("7.Exit\n");
		printf("Enter Choises\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:createlist();
			break;
			case 2:printf("Enter number to add at beginning\n");
			scanf("%d",&x);
			addbeg(x);
			break;
			case 3:printf("Enter number to add at end\n");
			scanf("%d",&x);
			addend(x);
			break;
			case 4:delbeg();
			break;
			case 5:delend();
			break;
			case 6:display();
			break;
			case 7:exit(1);
			break;
		}
	}
}















