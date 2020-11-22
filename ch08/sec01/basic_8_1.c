/**
 * 기본 8-1 | 배열을 사용하지 않은 변수 선언 방식
 */
#include <stdio.h>

int main() {
    int a, b, c, d;
    int hap;

    printf("1번째 숫자를 입력하세요 : ");
    scanf("%d", &a);
    printf("2번째 숫자를 입력하세요 : ");
    scanf("%d", &b);
    printf("3번째 숫자를 입력하세요 : ");
    scanf("%d", &c);
    printf("4번째 숫자를 입력하세요 : ");
    scanf("%d", &d);

    hap = a + b + c + d;
    printf("합계 == > %d \n", hap);

    return 0;
}