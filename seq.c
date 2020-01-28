#include<stdio.h>
#define max 5
int sequentialsearch(int,int,int);
void main()
{
	int list[max]={5,7,9,11,13};
	int index;
	int target;
	printf("enter a target");
	scanf("%d",&target);
	index=sequentialsearch(list,target,n);
}
int sequentialsearch(int,int,int)
{
	for(int i=0;i<n;i++)
	{
	if(target ==list[i])
	return i;
	}
	return -1;
}