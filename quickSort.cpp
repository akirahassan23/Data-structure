#include<stdio.h>
#include <climits>
void swap(int*x, int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int partition(int A[],int l, int h)
{
	int pivot=A[l];
	int i=l, j=h;
	do
	{
		do{i++;} while(A[i]<=pivot);
		do{j--;} while(A[j]>pivot);
		if(i<j)
		{
			swap(&A[i],&A[j]);
		}
	}while(i<j);
	swap(&A[l],&A[j]);
	return j;
}
void quickSort(int A[], int l, int h)
{
	int j;
	if(l<h)
	{
		j= partition(A,l,h);
		quickSort(A,l,j);
		quickSort(A,j+1,h);
	}
}
void displayArray (int A[], int n)
{
	int i;
	printf("\nBefore Quick Sort:-\n");
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
	int arr[]={45,8,12,6539,1,0,INT_MAX}, n=7, i;
	//arr[n-1]=INT_MAX;
//	printf("Enter array size:-\n");
//	scanf("%d",&n);
//	readArray(arr,n);
	quickSort(arr,0,n-1);
	printf("\nAfter Quick Sort:-\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
}