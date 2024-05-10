#include <stdio.h>

// 思路：这个程序的目的是接收一个两位数作为输入，并将其转换成英文单词表示的形式。
int main() {
    int num, a, b;
    scanf("%d", &num);
    // 计算num的十位数和个位数
    a = num / 10;
    b = num % 10;

    if (num == 10) {
        printf("ten");
    }
    // 处理11到19
    else if (num >= 11 && num <= 19) {
        switch(num) {
        case 11:
                printf("eleven\n");

                break;
            case 12:
                printf("twelve\n");
                break;
            case 13:
                printf("thirteen\n");
                break;
            case 14:
                printf("fourteen\n");
                break;
            case 15:
                printf("fifteen\n");
                break;
            case 16:
                printf("sixteen\n");
                break;
            case 17:
                printf("seventeen\n");
                break;
            case 18:
                printf("eighteen\n");
                break;
            case 19:
                printf("nineteen\n");
                break;
        }
    } 
    else {
        switch(a) {
         case 2:
        printf("twenty");
        break;
    case 3:
        printf("thirty");
        break;
    case 4:
        printf("forty");

        break;
    case 5:
        printf("fifty");
        break;
    case 6:
        printf("sixty");
        break;
    case 7:
        printf("seventy");
        break;
    case 8:
        printf("eighty");
        break;
    case 9:
        printf("ninety");
        break;
        }
        switch(b) {
            case 1:
                printf("-one\n");
                break;
            case 2:
                printf("-two\n");
                break;
            case 3:
                printf("-three\n");
                break;
            case 4:
                 printf("-four\n");
                break;
         case 5:
                printf("-five\n");
                break;
              case 6:
                printf("-six\n");
                break;
            case 7:
                printf("-seven\n");
                break;
            case 8:
         printf("-eight\n");
                break;
            case 9:
                printf("-nine\n");
            break;
            default:
                printf("\n"); 
        }
    }

    return 0;
}
