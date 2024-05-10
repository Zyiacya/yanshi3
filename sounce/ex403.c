#include <stdio.h>
#include <stdlib.h>

// 定义一个结构体用于表示数据集中的元素及其重复个数
struct ElementCount {
    int value;
    int count;
};

// 比较函数用于排序
int func1(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// 函数用于统计数据集中每个元素的重复个数
void countElements(int rec[], int n) {
    struct ElementCount counts[n];
    int visited[n];

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        counts[count].value = rec[i];
        counts[count].count = 1;

        for (int j = i + 1; j < n; j++) {
            if (rec[i] == rec[j]) {
                visited[j] = 1;
                counts[count].count++;
            }
        }

        count++;
    }

    // 按照从小到大的顺序输出
    for (int i = 0; i < count; i++) {
        printf("%d %d\n", counts[i].value, counts[i].count);
    }
}

int main() {
    int n1, n2;

    scanf("%d", &n1);

    int rec1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &rec1[i]);
    }

    scanf("%d", &n2);

    if (n1 != n2) {
        printf("0\n");
        return 0;
    }

    int rec2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &rec2[i]);
    }

    // 排序
    qsort(rec1, n1, sizeof(int), func1);
    qsort(rec2, n2, sizeof(int), func1);

    // 判断是否相同
    int isEqual = 1;
    for (int i = 0; i < n1; i++) {
        if (rec1[i] != rec2[i]) {
            isEqual = 0;
            break;
        }
    }

    if (isEqual) {
        printf("1\n");
        countElements(rec1, n1); // 输出第一个数据集中的数据及重复个数
    } else {
        printf("0\n");
    }

    return 0;
}
