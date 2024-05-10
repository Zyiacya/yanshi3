#include <stdio.h>

int main() {
    int a = 1; // 第10天早上剩下的桃子数

    // 从第10天开始往前推，直到第一天
    for (int i = 9; i >= 1; i--) 
    {
        a = (a + 1) * 2; // 更新桃子数，每天早上吃一半多一个
    }

    printf("%d\n", a); // 输出第一天所摘桃子的数量

    return 0;
}

