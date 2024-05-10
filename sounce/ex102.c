#include "stdio.h"

// 思路：这个程序的目的是接收两个整数作为输入，然后计算它们的和、差、积和商，并将结果打印到控制台。
int main()
{
    int rec1, rec2;
    
    scanf("%d,%d", &rec1, &rec2);
    // 和
    printf("a+b=%d\n", rec1 + rec2);
    // 差
    printf("a-b=%d\n", rec1 - rec2);
    
    //积
    printf("a*b=%d\n", rec1 * rec2);
    // 商
    printf("a/b=%d", rec1 / rec2);

    return 0;
}
