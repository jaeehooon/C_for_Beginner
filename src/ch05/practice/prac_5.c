/**
 * 연습문제 5번 | 입력한 수가 양수인지 음수인지 0인지를 출력하는 프로그램(중첩 if문 사용)
 */
#include <stdio.h>

int main() {
    int a;

    printf("처리할 수를 입력하세요 : ");
    scanf("%d", &a);

    if (a == 0)
        printf("입력한 수는 0입니다.\n");
    else if (a > 0)
        printf("입력한 수는 양수(+)입니다.\n");
    else
        printf("입력한 수는 음수(-)입니다.\n");
}
