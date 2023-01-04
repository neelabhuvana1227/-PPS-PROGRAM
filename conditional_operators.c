#include<stdio.h>
void main()
{

	int n;
	char*arr[2]={"even","odd"};
	printf("enter a number:");//take the number from the user
	scanf("%d",&n);
	printf("the number is %s",arr[n%2]);
	//get the remainder to choose the string.
}
