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
int facing_sun(int a[], int n)
{
	int i,j,x,flag=0,c=1;
	x=a[0];
	for (i=1;i<n;i++)
	{
		if(a[i]>x)
		{
			c++;
			x = a[i];
		}
	}
	printf("Buildings facing sun are %d",c);
}
int main()
{
	int arr[] = {21,31,83,54,56,78,7,90};
	int size = sizeof(arr)/sizeof(arr[0]);
	printarray(arr,size);
	facing_sun(arr,size);
	return 0;
}
