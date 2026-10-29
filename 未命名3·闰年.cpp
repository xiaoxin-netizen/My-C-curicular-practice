#include<stdio.h>
int main()
{
	int n;
	printf("输入一个年份：");
	scanf("%d",&n);
	if(n%4==0&&n%100!=0)
	printf("是闰年");
	else
	{
		if(n%400==0)
		printf("是闰年");
		else
		printf("不是闰年");
	}
	return 0; 
}








