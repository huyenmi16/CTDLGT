#include<stdio.h>
#include<math.h>
int check(int n)
{
	int m=n;
	int sum=0,tn=0;
	while(n>0)
	{
		if(n%10==4) return 0;
		else
		{
			sum+=n%10;
			tn=tn*10+n%10;
			n/=10;
		}
	}
	if(sum%10==0 && tn==m) return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=pow(10,n-1);i<pow(10,n);i++)
		{
			if(check(i)==1)
			{
				printf("%d ",i);
			}
		}
		printf("\n");
		
	}
}