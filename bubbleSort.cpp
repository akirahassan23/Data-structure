#include <stdio.h>
void swap (int* a, int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void bubbleSort (int A[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int flag = 0;
		for(j=0;j<n-1;j++)
		{
			if(A[j]>A[j+1])
			{
				swap(&A[j],&A[j+1]);
				flag=1;
			}
		}
		if(flag==0) break;
	}	
}
int main()
{
	int arr[50],n,i;
	printf("Enter the size:-\n");
	scanf("%d",&n);
	
	printf("Enter the elements:-\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nBefore sorting:-\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	bubbleSort(arr,n);
	printf("\nAfter sorting:-\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}