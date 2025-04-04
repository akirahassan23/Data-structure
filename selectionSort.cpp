#include<stdio.h>
void swap (int* a, int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void selectionSort(int A[], int n)
{
	int i,j,k;
	for (i=0;i<n-1;i++)
	{
		for(j=k=i;j<n;j++)
		{
			if(A[j]<A[k])
			{
				k=j;
			}
		}
		swap(&A[i],&A[k]);
	}
}
void displayArray (int A[], int n)
{
	int i;
	printf("\nBefore Selection Sort:-\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	selectionSort(A,n);
	printf("\nAfter Selection Sort:-\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
void readArray(int A[], int n)
{
	int i;
	printf("Enter elements:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	displayArray(A,n);
}
int main()
{
	int arr[100],size;
	printf("Enter array size:-\n");
	scanf("%d",&size);
	readArray(arr,size);
}