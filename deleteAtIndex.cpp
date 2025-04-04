#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node * next;
};
struct Node * deleteAtIndex(struct Node* head,int index)
{
	int i;
	struct Node * ptr = head;
	struct Node * q = head->next;
	for(i=0;i<index-1;i++)
	{
		ptr=ptr->next;
		q=q->next;
	}
	ptr->next=q->next;
	free(q);
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
	printf("\nEnter the index at which you wish to delete the data:-\n");
	scanf("%d",&index);
	head=deleteAtIndex(head,index);
	printf("\nAfter deletion:-\n");
	linkedListTraversal(head);
}