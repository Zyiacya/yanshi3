#include <stdio.h>

// 计算账户余额
double func(double a, double b, int c) 
{
    double rec;
    rec = b / 12.0;// 月利率
    double w = 0;// 初始化余额
     // 循环计算每月的余额
    for (int i = 0; i < c; i++) {
        w = (w + a) * (1 + rec);// 计算新的余额
    }
    
    return w;// 返回最终余额
}

int main() 
{
    double a, b;
int c;
    
     scanf("%lf,%lf,%d", &a, &b, &c);
    
    // 调用函数计算余额
 double result = func(a, b, c);
    printf("%.2lf\n", result);
    
    return 0;
}
