#include <stdio.h>
#include <stdlib.h>

// 比较函数，用于qsort
int func1(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() 
{
    int n;
    scanf("%d", &n);
    int rec[n], a[n], b[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &rec[i]);
        a[i] = rec[i]; // 将原数组复制一份用于排序和编号
        b[i] = 0; // 初始化b数组
    }

    // 对复制的数组进行排序
    qsort(a, n, sizeof(int), func1);

    int rank = 1;
    for (int i = 0; i < n; i++) {
        // 如果不是第一个元素且当前元素与前一个元素不同，排名加1
        if (i > 0 && a[i] != a[i - 1]) {
            rank = rank + 1;
        }

        for (int j = 0; j < n; j++) {
            if (rec[j] == a[i] && b[j] == 0) { 
                b[j] = rank;
            }
        }
    }
        
    for(int i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    
    return 0;
}

