#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
struct Node* insertAtEnd(struct Node* head, int x)
{
	struct Node * ptr = (struct Node* ) malloc (sizeof(struct Node));
	struct Node * p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	ptr->data=x;
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
void linkedListTraversal(struct Node* p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
    	p=p->next;
	}
}
int main()
{
	int x,index;
	struct Node* head;
	struct Node* second;
	struct Node* third;
	struct Node* fourth;
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*) malloc (sizeof(struct Node));
	third=(struct Node*) malloc (sizeof(struct Node));
	fourth=(struct Node*) malloc (sizeof(struct Node));
	head->data=34; head->next=second;
	second->data=426; second->next=third;
	third->data=5; third->next=fourth;
	fourth->data=61; fourth->next=NULL;
	linkedListTraversal(head);
	printf("\nEnter the element:-\n");
	scanf("%d",&x);
	head=insertAtEnd(head,x);
	linkedListTraversal(head);
}