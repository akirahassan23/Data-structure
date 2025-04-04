#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
struct Node* deleteAtEnd(struct Node* head)
{
	struct Node* p = head;
	struct Node* q = head->next;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	return head;
}
void linkedListTraversal (struct Node* ptr)
{
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
	    ptr=ptr->next;
	}
}
int main()
{
	struct Node* head = (struct Node *) malloc (sizeof(struct Node));
	struct Node* second = (struct Node *) malloc (sizeof(struct Node));
	struct Node* third = (struct Node *) malloc (sizeof(struct Node));
	struct Node* fourth = (struct Node *) malloc (sizeof(struct Node));
	head->data=34; head->next=second;
	second->data=426; second->next=third;
	third->data=5; third->next=fourth;
	fourth->data=61; fourth->next=NULL;
	linkedListTraversal(head);
	head=deleteAtEnd(head);
	printf("\nAfter deletion:-\n");
	linkedListTraversal(head);
}