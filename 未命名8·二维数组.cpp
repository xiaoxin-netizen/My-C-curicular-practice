#include<stdio.h> 
int main()
{
	int a[5][5],j,i;
	for(i=1;i<5;i++)
	{
		for(j=1;j<6;j++)
		{
			a[i-1][j-1]=j+5*(i-1);
			printf("%-5d",a[i-1][j-1]);
			 
		}
		printf("\n");
	 
	}
	 
	return 0;
 } 
