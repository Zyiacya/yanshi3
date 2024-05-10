#include <stdio.h>

// 思路：这个程序的目的是根据用户输入的购买金额计算最终金额，并根据购买金额的不同进行不同的折扣
int main() {
    float a, b; // 购买金额和最终金额
    scanf("%f", &a);

    //计算最终金额
    if (a <= 500) 
    {
        b = a;
    } 
else if (a <= 1000)
     {
        b = a * 0.9;
    } 
    else 
    {
        b = a * 0.8;
    }

    printf("%.2f\n", b);

    return 0;
}
