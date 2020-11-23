/**
 * 예제모음 25 | 포인터를 이용한 두 값의 교환
 */
#include <stdio.h>

int main() {
    int a, b, tmp;
    int *p1, *p2;

    printf("a 값 입력 : ");
    scanf("%d", &a);
    printf("b 값 입력 : ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;

    printf("바뀐 값 a는 %d, b는 %d\n", a, b);

    return 0;
}
