#include <stdio.h>

// 函数用于计算一个数的因子之和
int func(int num) {
    int sum = 1; // 默认因子1
    for (int i = 2; i * i <= num; i++) 
    {
    if (num % i == 0) 
    
{
         sum += i;
            if (i * i != num) // 避免重复计算平方根
                sum += num / i;
        }
    }
    return sum;
}

int main() {
    int a, b;
  scanf("%d,%d", &a, &b);
    if (a <= 0 || b <= 0 || a > 9999 || b > 9999 || a > b) 
    {
        printf("error\n");
        return 0;
    }

    int flag = 0; // 记录是否找到完数
    for (int num = a; num <= b; num++)
    
 {
        int factors_sum = func(num); // 计算因子之和
        if (factors_sum == num && num != 1) 
        { // 判断是否为完数，且不是1
            if (flag)
                printf(",");
            printf("%d", num);
            flag = 1;
        }
    }

    if (!flag) 
    printf("None");
    printf("\n");
    return 0;
}
