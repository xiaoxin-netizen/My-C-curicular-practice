#include<stdio.h>
int main()
{
	long long a,b,t,i;
	printf("输入一个正整数："); 
	scanf("%lld",&a);
	t=a;
	for(i=1;t!=0;i++)
	{
	    b=t%10;
		t=t/10;
		printf("从右数第%d个数%lld\n",i,b);
		 
		
		
		
	}
	printf("怎么样我聪明吧ㄟ( ▔, ▔ )ㄏ");
    return 0;
}



 
