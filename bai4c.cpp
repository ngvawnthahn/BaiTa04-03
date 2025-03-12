#include<stdio.h>
#include<math.h>
long long sum=0;
int main()
{
	for(int i=1;i<=100;i+=2)
		sum+=i;
		printf("tổng các số lẻ từ 1 đến 100 là;%lld",sum);
	return 0;
}
