#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL,*p,*t,*newnode;
void create()
{
	int x,n,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
    	printf("enter the value");
	    scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next= NULL;
	if(head==NULL)
	{
		head=newnode;
		p =newnode;
	}
	else
	{
		for(p=head;p->next!=NULL;p=p->next);
		p->next=newnode;
		p=newnode;
	}
}
}
void insert_at_begin()
{
	int x;
	printf("enter the values");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	p=head;
	head=newnode;
	newnode->next=p;
	p=newnode;
}
void insert_at_end()
{
	int x;
	printf("enter the values:");
	scanf("%d",&x);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}


void display()
{
	if(head==NULL)
   	printf("SLL is empty");
	else
	    for(p=head;p!=NULL;p=p->next)
	        printf("%d->",p->data);
}
void insert_at_anyposition()
{
	int i,pos,x;
	printf("enter value and position:");
	scanf("%d%d",&x,&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
    for(p=head,i=1;i<pos;p=p->next,i++)
	t=p;
	t->next=newnode;
	newnode->next=p;
	p=newnode;
}
int main()
{
	int ch;
do
{
	printf("\nSINGLE LINKED LIST");
	printf("\n1. create\n2.display\n3.insert_at_begin\n4.inset_at_end\n5.insert_at_anyposition\n6.exit\n");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: create();break;
		case 2: display();break;
		case 3: insert_at_begin();break;
		case 4: insert_at_end();break;
		case 5: insert_at_anyposition();break;
		case 6: exit(0);break;
		default: printf("invalid choice");
	}
	
}
while(ch>0&&ch<=6);	
}
