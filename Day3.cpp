#include<iostream>
struct Node
{
	int data;
	Node *next;
};

Node *create(int x);
Node *insert_end(Node *head,int x);
Node *delete_end(Node *head);
void display(Node *head);

int main()
{
	Node *head= new Node;
	head=insert_end(head,10);
	head=insert_end(head,20);
	head=insert_end(head,30);
	head=insert_end(head,40);
	delete_end(head)
	
	display(head);

	return 0;
}

Node *delete_end(Node *head)
{
	while(head->next->next)
		head=head->next;
	head->next=NULL
	return head;
	
}

void display(Node *head)
{
	if(!head)
	{
		cout<<"No Node";
		return;
	}
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

Node *create(int x)
{
	Node *nptr =new Node;
	nptr->data=x;
	nptr->next=NULL;
	
	return nptr;
}

Node *insert_end(Node *head,int x)
{
	Node *np=create(x);
	if(head==NULL)
	{
		head=np;
		return head;
	}
	
	Node *t=head;
	
	while(t->next);
	{
		t=t->next;
	}
	
	if(head!=NULL)
	{
		t->next=np;
		t=t->next;
		return head;
	}
	
}