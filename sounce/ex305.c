#include <stdio.h>

int main() {
    int num, sum = 0;



 for (int i = 0; i < 8; i++) 
    {
        scanf("%d", &num);
        // 判断是否为偶数，如果是则累加到sum中
        if (num % 2 == 0) {
            sum += num;
        }
    }
    // 输出偶数的和
    printf("%d\n", sum);

    return 0;
}

