#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter your value upto witch you want to do table =");
	scanf("%d",&c);
	for (a=1;b<c;a++)
	{
		for(b=1;b<=10;b++)
		{
			printf("%d*%d=%d",a,b,a*b);
			printf("\t");
		}
	}
	
	
	
	
	
return 0;
	
	
}
