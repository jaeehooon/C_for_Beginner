/**
 * 기본 11-1 | 서식화된 입출력 함수 사용 예
 */
#include <stdio.h>

void main() {
    int a;
    float b;
    char ch;
    char s[20];

    printf("정수를 입력 : ");
    scanf("%d", &a);
    printf("실수를 입력 : ");
    scanf("%f", &b);
    printf("문자를 입력 : ");
    scanf(" %c", &ch);              // b를 입력받을 때 'enter'를 무시하기 위해 공백을 둠
    printf("문자열를 입력 : ");
    scanf("%s", s);

    printf("\n정수의 10진수 ==>\t%d\n", a);
    printf("정수의 16진수 ==>\t%X\n", a);
    printf("정수의 8진수  ==>\t%o\n", a);
    printf("실수 ==>\t%10.3f\n", b);
    printf("실수(공학용) ==>\t%e\n", b);
    printf("문자 ==>\t%c\n", ch);
    printf("문자열 ==>\t%s\n", s);
}
