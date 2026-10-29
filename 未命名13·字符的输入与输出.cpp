#include <stdio.h>
int  main ( )                
{ char a,b,c; 
   printf("1:");
   a=getchar();
   printf("\n");
   getchar();//getchar 会吃掉换行 ，需要加个空白的getchar来吃掉空行 
	 printf("2:");
   b=getchar(); 
   printf("\n");
   getchar();
   printf("3:");
   c=getchar(); 
   printf("\n");
   putchar(a); putchar(b); putchar(c); 
                   
   return 0;
 }
