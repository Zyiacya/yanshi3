// 思路：这个程序的目的是计算特定范围内一系列数的四次方和。
#include <stdio.h>
#include <math.h>

int main() {
    int x;
    scanf("%d", &x);
    if (x >= 3 && x <= 10) {
        // 计算特定范围内一系列数的四次方和
        int result = pow(x, 4) + pow(x + 3, 4) + pow(x + 6, 4) + pow(x + 9, 4) + pow(x + 12, 4) + pow(x + 15, 4);
        
        printf("%d\n", result);
    } 
    else 
    {
        printf("error\n");
    }

    return 0;
}
