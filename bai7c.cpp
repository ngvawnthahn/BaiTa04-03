#include<stdio.h>
int main()
{
	float a,i,sum=0,c;
	scanf("nhập số:%f",&a);
	for(i=1;i<=a;i++)
	{
		c=1/i;
		sum+=c;
	}
	printf("tổng:%f",sum);
	return 0;
}
