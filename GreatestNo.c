#include<stdio.h>
int main()
{
	int a[5],i,j,larg;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	larg = a[0];
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]<a[j])
			{
				larg = a[j];
			}
		}
	}

	printf("%d\n",larg);
	return 0;
}
