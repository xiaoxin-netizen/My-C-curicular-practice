#include<stdio.h>
int main() 
{
	int a[4],i,t,n,j,k;
	for(i=0;i<4;i++)
	{
		printf("~~~~~~~~~请输入第%d个正整数~~~~~~：",i+1);
		scanf("%d",&a[i]);
		printf("\n好的我收到了^o^\n"); 
		 
	}
	printf("\n你的值分别是：\n"); 
	for(i=0;i<4;i++)
	{
		printf("%5d ",a[i]);
		
	}
	for(i=0;i<4;i++)
	{
		k=i;
		for(j=i+1;j<4;j++)
		{
			if(a[k]<a[j])//降序的stored array喵 ~ 
			{
				k=j;
			}
		 
		}
		t=a[i];
		a[i]=a[k];
	  a[k]=t; 
	}
	printf("\n已经将你输入的值进行了降序重排序：\n");
	for(i=0;i<4;i++)
	{
		printf("%5d ",a[i]);
		
	}
	for(i=0;i<4;i++)
	{
		k=i;
		for(j=i+1;j<4;j++)
		{
			if(a[k]>a[j])//升序的stored array喵 ~ 
			{
				k=j;
			}
		 
		}
		t=a[i];
		a[i]=a[k];
	  a[k]=t; 
	}
		printf("\n\n已经将你输入的值进行了升序重排序：\n");
	for(i=0;i<4;i++)
	{
		printf("%5d ",a[i]);
		
	}
	 return 0;
}
