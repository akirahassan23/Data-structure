#include <stdio.h>
int binarySearch (int A[],int n, int x)
{
	int low=0, high=n-1, mid;
	while(low<=high)
	{
	mid=(low+high)/2;
	if(A[mid]==x)
	return mid;
	if(A[mid]<x)
	low=mid+1;
	else
	high=mid-1;
	}
	return -1;
}
void readArray(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
}
int main()
{
	int n,A[50],x,find;
	printf("Enter the size of array:-\n");
	scanf("%d",&n);
	printf("Enter the SORTED elements:-\n");
	readArray(A,n);
	printf("Enter the element you want to find:-\n");
	scanf("%d",&x);
	find=binarySearch(A,n,x);
	if(find==-1)
	printf("Element NOT found!");
	else
	printf("%d found at index %d", x,find);
	return 0;
}

