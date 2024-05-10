#include <stdio.h>

// 定义冒泡排序函数
void func(int rec[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {   
        // 最后的i个已经排序好了，不需要再检查
        for (j = 0; j < n-i-1; j++) {
            if (rec[j] > rec[j+1]) {
                // 交换rec[j]和rec[j+1]
                temp = rec[j];
                rec[j] = rec[j+1];
                rec[j+1] = temp;
            }
        }
    }
}

int main() {
    int rec[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &rec[i]);
    }

    // 冒泡排序
    func(rec, 5);
    for(int i = 0; i < 5; i++) {
        printf("%d ", rec[i]);
    }
    return 0;
}