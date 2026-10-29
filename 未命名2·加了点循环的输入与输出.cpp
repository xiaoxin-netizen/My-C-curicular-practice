#include<stdio.h>
int main()
{
	int i,t[100],n,ans=0;
	printf("输入几个同学："); 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("输入第%d位同学的成绩：",i);
		scanf("%d",&t[i]);
		if(t[i]>=80)
		{
			ans++; 
			printf("哇第%d同学你考了%d分！\n",i,t[i]);
		}
		else
		printf("同学你很逊呢(* ￣︿￣)\n");
	  
	 } 
	 printf("一共有%d位同学被表扬（￣︶￣）↗\n　",ans); 
	 for(i=1;i<=n;i++)
	 {
	 	if(t[i]>=80)
	 	printf("\n%d号同学考了%d分",i,t[i]);
	 }
	 printf("\n其他人要加油呢(* ￣︿￣)ㄟ( ▔, ▔ )ㄏ"); 
	 return 0;
}





