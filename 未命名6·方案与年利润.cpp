#include<stdio.h>
int main()
{
	
	 while(1)
	 {
	 	int a,p0;
		float r1=0.2,r2=0.3,r3=0.5,p;
		printf("你有多少块钱要存呢╰(*°▽°*)╯：");
		scanf("%d",&p0);
		printf("你想用哪种方式存钱呢：1/2/3："); 
		scanf("%d",&a);
		switch(a)
		{
			case 1: p=p0*(1+r1);break; 
			case 2: p=p0*(1+r2);break;
			case 3: p=p0*(1+r3/2)*(1+r3/2);break;
		}
		printf("你的一年本息和是%f\n",p);
	  printf("\n");
	 }
		
	
	 return 0;
}
