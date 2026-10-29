#include<stdio.h>
int main()
{
	int i,t,j,a[4];
	for(i=0;i<4;i++)
	{
		printf("输入：");
		scanf("%d",&a[i]);//scanf不能加换行
		printf("\n"); 
	}
	printf("\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-j;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	 } 
	 printf("升序结果："); 
	 for(i=0;i<4;i++)
	 {
	 	printf("%5d ",a[i]);
	 }
	 return 0;
 } 
