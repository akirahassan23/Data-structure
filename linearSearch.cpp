#include <stdio.h>
int linearSearch (int A[],int n, int x)
{
	int i;
	for(i=0;i<n;i++)
    {
	    if(A[i]==x)
			return i;
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
	printf("Enter the elements:-\n");
	readArray(A,n);
	printf("Enter the element you want to find:-\n");
	scanf("%d",&x);
	find=linearSearch(A,n,x);
	if(find==-1)
	printf("Element NOT found!");
	else
	printf("%d found at index %d", x,find);
	return 0;
}

