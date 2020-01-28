#include<stdio.h>
int search(int );
int n,a[100],j;
int main()
{
	int i,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number: ");
	scanf("%d",&j);
	y=search(j);
	if(y==0)
		printf("This number dosent exist");
	else
		printf("%d is present at %d position",j,y);
	return 0;
}

int search(int x)
{
	int c,l,m,f;
	for(l=0;l<n;l++)
	{
		if(a[l]==j)
		{
			c=1;
			f=l;
			break;
		}
	}
	if(c==1)
		return f;
	else
		return 0;
}