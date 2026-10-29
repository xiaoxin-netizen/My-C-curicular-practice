#include<stdio.h> 
int main()
{
	int a[10],n=5,i;
	for(i=1;i<10;i++)//Ñ­»·¸³Öµ 
	{
		a[i]=i+1;
	}
	a[0]=a[5]+a[7]-a[2*3];
	printf("%d",a[0]);
	return 0;
 } 
