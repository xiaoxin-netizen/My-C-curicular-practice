#include <stdio.h>
#include "dyi.h"  // 包含头文件，自动把上面一堆extern拿进来
 
int main()
{
    int n;
    scanf("%d%d%d", &array[0], &array[1], &n);
    size=2; 
    for (int p = 0;; ++p)
    {
        if (size > n) break;
        length = 0; //重置

        int number = array[p] * array[p + 1];

        do num_to_digit[length++] = number % 10;
        while (number /= 10); //将 number 每一位从低位到高位存入 num_to_digit

        while (length > 0) array[size++] = num_to_digit[--length];
        //将 number 的每一位从高位到低位取出来放到 array 后面
    }
    for (int i = 0; i < n; ++i) printf("%d ", array[i]); //输出
}
