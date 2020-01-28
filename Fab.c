#include<stdio.h>
int fab(int);
int main()
{
	int n,y;
	scanf("%d",&n);
	y=fab(n);
	printf("%d\n",y);
	return 0;
}

int fab(int x)
{
	int f1=0,f2=1,c=0;
	if(x==1 || x==0)
		return 0;
	else if(x==2)
		return 1;
	else
		return (fab(x-1)+fab(x-2));
}