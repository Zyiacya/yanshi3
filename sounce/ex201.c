#include <stdio.h>
#include <math.h>

// 思路：这个程序的目的是接收一个整数作为输入，如果输入的数为负数或偶数，则计算其平方；如果输入的数为正奇数，则计算其减1后再除以2的结果
void main()
{
    int rec;
scanf("%d", &rec);
    // 如果输入的数为负数或偶数，则计算其平方
    if(rec < 0 || rec % 2 == 0)
    {
        printf("%0.f", pow(rec, 2));
    }
    else // 如果输入的数为正奇数，则计算其减1后再除以2的结果
        printf("%d", (rec - 1) / 2);
}








