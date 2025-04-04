#include<stdio.h>
void insertionSort(int A[], int n)
{
	int i, j, x;
	for(i=1;i<n;i++)
	{
		j=i-1;
		x=A[i];
		while(j>-1&&A[j]>x)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=x;
	}
}
void displayArray(int A[], int n)
{
	int i;
	printf("Before Insertion Sort:-\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	insertionSort(A,n);
	printf("\nAfter Insertion Sort:-\n");
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
	int arr[50],n;
	printf("Enter array length:-\n");
	scanf("%d",&n);
	readArray(arr,n);
	return 0;	
}