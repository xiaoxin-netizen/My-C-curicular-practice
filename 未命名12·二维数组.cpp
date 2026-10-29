#include<stdio.h>
int main()
{
	int a[5][5],i,t,j,n;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			/*printf("输入：");
			scanf("%d",&a[i][j]);
			printf("\n"); */
			a[i][j]=j+1+5*(i+1-1);
		}	 
	}
	printf("array：\n"); 
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			 
			printf("%-5d",a[i][j]); //这个是左对称哦 
			
		}	 
		printf("\n"); 
	}
	
	
	return 0;
 } 
