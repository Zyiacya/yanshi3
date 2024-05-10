#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char *s) {
    char* a = strchr(s, '[');
    char* b = strchr(s, ']');
    int len = atoi(a + 1);

    char* c = strchr(s, '=');
    if (c != NULL) {
        // 找出初始化数据的开始和结束位置
        char* d = strchr(s, '{');
        char* e = strchr(s, '}');

        // 从初始化数据中逐个读取数字并输出
        int num;
        int flag = 0;
        char* flag_t = strtok(d + 1, ",}");
        while (flag_t != NULL && flag < len) {
            num = atoi(flag_t);
            printf("%d ", num);
            flag++;
            flag_t = strtok(NULL, ",}");
        }
        for (int i = flag; i < len; i++) {
            printf("0 ");
        }
    }
    else {
        // 输出全部为未初始化的部分
        for (int i = 0; i < len; i++) {
            printf("N ");
        }
    }
    printf("\n");
}
int main() {
    char pa[100];
    // 读取输入
    fgets(pa, 100, stdin);
    if (pa[strlen(pa) - 1] == '\n') {
        pa[strlen(pa) - 1] = '\0';
    }

    func(pa);

    return 0;
}
