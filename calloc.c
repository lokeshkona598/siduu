/* c program to find sum of elements by using calloc() function*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*ptr,sum=0;
	printf("enter num:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		print("error!");
		exit(0);
	}
	printf("the elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("the sum of elements is %d",sum);
	free(ptr);
}
