#include <stdio.h>

// 思路：这个程序的目的是根据用户输入的用电量计算电费，并考虑基础费用和超过400元部分的附加费用
int main() {
    int a; // 用电量
    float b, c; // 总费用和附加费用

    // 输入用电量
    scanf("%d", &a);

    // 计算总费用
 if (a <= 200) {
        b = a * 0.8;
    } else if (a <= 300) 
    
    {
        b = 200 * 0.8 + (a - 200) * 0.9;
    } 
    
    
    else {
        b = 200 * 0.8 + 100 * 0.9 + (a - 300) * 1.0;
    }

    // 100元的基础费用
    b = (b < 100) ? 100 : b;

    // 检查总费用是否超过400元，并计算附加费用
 if (b > 400) {
        c = b * 0.15;
        b += c;
    } 
    else
 {
        c = 0;
    }

    // 显示总费用
    printf("%.2f\n", b);

    return 0;
}