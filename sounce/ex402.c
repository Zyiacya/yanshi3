#include "stdio.h"

// 函数用途：检查一个数是否为素数
// 形式参数：a为待检查的整数
// 返回值：如果a是素数，则返回0；否则返回1
int check(int a) {
    int i, flag = 0;
    // 遍历2到a-1之间的每个数
    for (i = 2; i < a; i++) {
        // 如果a能被i整除，则a不是素数，返回1
        if (a % i == 0) {
            return 1;
        }
    }
    // 如果上述情况都不满足，则a是素数，返回0
    return 0;
}

int main() {
    int a[2], i;
    // 从键盘输入两个整数a[0]和a[1]
    scanf("%d,%d", &a[0], &a[1]);
    // 循环遍历a[0]到a[1]之间的每个数
    for (i = a[0]; i <= a[1]; i++) {
        // 如果i和i+2都是素数，则输出i和i+2
        if (check(i) == 0 && check(i + 2) == 0)
            printf("%d,%d\n", i, i + 2);
    }
}
