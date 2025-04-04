#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
void traversal(struct Node* head)
{
	struct Node* ptr= head;
	do
	{
		printf("%d ", ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
}
int main()
{
	struct Node* head = (struct Node*) malloc (sizeof(struct Node));
	struct Node* second = (struct Node*) malloc (sizeof(struct Node));
	struct Node* third = (struct Node*) malloc (sizeof(struct Node));
	struct Node* fourth = (struct Node*) malloc (sizeof(struct Node));
	head->data=13; head->next=second;
	second->data=213; second->next=third;
	third->data=33; third->next=fourth;
	fourth->data=39; fourth->next=head;
	traversal(head);
}