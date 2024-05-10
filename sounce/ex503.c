#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    int count;
} NumCount;

// 按数值升序排序
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// 按次数降序排序，次数相同按数值升序
int compare_count(const void* a, const void* b) {
    NumCount* num1 = (NumCount*)a;
    NumCount* num2 = (NumCount*)b;
    if (num1->count != num2->count)
        return (num2->count - num1->count);
    else
        return (num1->value - num2->value);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) { // 处理边界情况
        int num;
        scanf("%d", &num);
        printf("%d 1\n", num);
        return 0;
    }

    int nums[100]; // 固定大小的整数数组
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    qsort(nums, n, sizeof(int), compare);

    NumCount counts[100]; // 固定大小的 NumCount 结构体数组
    int maxCount = 0, countIndex = -1; // 初始化 countIndex 为 -1

    for (int i = 0; i < n; i++) {
        if (i == 0 || nums[i] != counts[countIndex].value) {
            countIndex++;
            counts[countIndex].value = nums[i];
            counts[countIndex].count = 1;
        } else {
            counts[countIndex].count++;
        }
        if (counts[countIndex].count > maxCount) {
            maxCount = counts[countIndex].count;
        }
    }

    qsort(counts, countIndex + 1, sizeof(NumCount), compare_count);

    // 输出出现次数最多的整数及其次数
    for (int i = 0; i <= countIndex; i++) {
        if (counts[i].count == maxCount) {
            printf("%d %d\n", counts[i].value, counts[i].count);
        }
    }

    return 0;
}

