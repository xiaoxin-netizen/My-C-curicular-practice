#include<stdio.h>
int main()
{
	
	while(1)
	{
		int n,i,a=1;
		printf("输入一个正整数n:");
	scanf("%d",&n);
	for(i=n-1;i>1;i--)
	{
		if(n%i==0)
		{
			printf("%d不是质数呢ㄟ( ▔, ▔ )ㄏ",n);
			a=0; 
		  break;
		}
		 
	 } 
	 if(a)
	 printf("%d是质数呢╰(*°▽°*)╯",n);	
	 printf("\n");
	 } 
	
	 return 0;
}
