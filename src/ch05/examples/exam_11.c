/**
 * 예제모음 11 | 단순 if문을 활용한 간단한 계산기
 */
#include <stdio.h>

int main() {
    int a, b;
    char ch;

    printf("첫 번째 수를 입력하세요 : ");
    scanf("%d", &a);
    printf("계산할 연산자를 입력하세요 : ");
    scanf(" %c", &ch);
    printf("두 번째 수를 입력하세요 : ");
    scanf("%d", &b);

    if (ch == '+')
        printf("%d + %d = %d 입니다.\n", a, b, a + b);
    if (ch == '-')
        printf("%d - %d = %d 입니다.\n", a, b, a - b);
    if (ch == '*')
        printf("%d * %d = %d 입니다.\n", a, b, a * b);
    if (ch == '/')
        printf("%d / %d = %d 입니다.\n", a, b, a / b);
    if (ch == '%')
        printf("%d %% %d = %d 입니다.\n", a, b, a % b);
}
