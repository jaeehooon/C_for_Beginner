/**
 * 응용 5-6 | 블록을 활용한 if~else문 사용 예2
 */
#include <stdio.h>

int main() {
    int a;

    printf("정수를 입력하세요 : ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("짝수를 입력했군요...\n");
    }
    else {
        printf("홀수를 입력했군요...\n");
    }
}
