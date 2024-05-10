#include <stdio.h>


float func(int n, int x)// 递归计算勒让德多项式
 {
    // 处理错误输入
    if (n < 0)
     {
        printf("error\n");
        return 0;
    } 
 else if (n == 0)
   {
        return 1;
    }
     else if (n == 1)
     
      {
        return x;
    } 

    else 
    {
        // 递归计算 Pn-1(x) 和 Pn-2(x)
        float a = func(n - 1, x);
        float b = func(n - 2, x);
        // 计算 Pn(x)
        return ((2 * n - 1) * x - a - (n - 1) * b) / (float)n;
    }
}

int main() {
    int n, x;
    scanf("%d,%d", &n, &x);
    float result = func(n, x);
    if (n >= 0) 
    {
        printf("%.2f\n", result);
    }

    return 0;
}

