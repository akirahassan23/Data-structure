#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
struct Node * deleteAtStart(struct Node* head)
{
	struct Node * ptr = head;
	head=head->next;
	free(ptr);
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
	int x;
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	struct Node* second=(struct Node*)malloc(sizeof(struct Node));
	struct Node* third=(struct Node*)malloc(sizeof(struct Node));
	struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
	struct Node* fifth=(struct Node*)malloc(sizeof(struct Node));
	head->data=34; head->next=second;
	second->data=426; second->next=third;
	third->data=5; third->next=fourth;
	fourth->data=61; fourth->next=fifth;
	fifth->data=34;fifth->next=NULL;
	linkedListTraversal(head);
	head = deleteAtStart(head);
	printf("\nAfter deletion:-\n");
	linkedListTraversal(head);
}