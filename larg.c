#include<stdio.h>
int ratio(int,int,int);
int d_positive(int,int);
int main()
{
	int a,b,c;
	float x;
	scanf("%d %d %d",&a,&b,&c);
	x=ratio(a,b,c);
	if(x!=1)
	{
		printf("%f",x);
	}
	else
	{
		printf("Ratio is not possible");
	}
	return 0;
}

int ratio(int k,int l,int m)
{
	float t,z;
	z = d_positive(l,m);
	t = k/z;
	if(z!=0)
	{
		return t;
	}
	else
	{
		return 1;
	}
}

int d_positive(int o,int p)
{
	if((o-p)>0)
	{
		return (o-p);
	}
	else 
	{
		return 0;
	}
}