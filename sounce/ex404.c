#include <stdio.h>

// 函数用途：检查给定年份是否是闰年
// 形式参数：year为待检查的年份
// 返回值：如果year是闰年，则返回1；否则返回0
int check(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; // 如果year是闰年，则返回1
    else
        return 0; // 如果year不是闰年，则返回0
}

int main() {
    int year;

    // 从键盘输入待检查的年份
    scanf("%d", &year);

    // 调用check函数检查年份是否是闰年，根据返回值输出相应信息
    if (check(year)) {
        printf("%d is a leap year\n", year); // 如果是闰年，则输出该年是闰年
    } else {
        printf("%d is not a leap year\n", year); // 如果不是闰年，则输出该年不是闰年
    }

    return 0;
}
