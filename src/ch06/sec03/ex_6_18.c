/**
 * 응용 6-18 | for문의 다양한 활용 에 3
 */
#include <stdio.h>

int main() {
    int a, b;

    for(    ;   ;   ) {                     // 무한루프
        printf("더할 두 수 입력 (멈추려면 -1 -1 입력) : ");         // 파이참 환경에서 Run 진행 시, Ctrl + C 작동 X
        scanf("%d %d", &a, &b);

        if (a == -1 && b == -1)
            break;
        printf("%d + %d = %d \n", a, b, a + b);
    }
}
