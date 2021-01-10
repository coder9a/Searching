#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int linearsearch(int a[], int n)
{
	int i,j,x,flag=0,c=0;
	printf("Enter element to be searched\t");
	scanf("%d",&x);
	for (i=0;i<n;i++)
	{
		c++;
		if(a[i]==x)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("Element found at position %d",c);
	}
	else
	{ 
		printf("Element not found");
	}
}
int main()
{
	int arr[] = {21,31,83,54,56,78,7,90};
	int size = sizeof(arr)/sizeof(arr[0]);
	printarray(arr,size);
	linearsearch(arr,size);
	return 0;
}
