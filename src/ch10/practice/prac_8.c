/**
 * 연습문제 8 | 7번과 동일한 프로그램을 call by reference 를 활용
 */
#include <stdio.h>

int diff(char *a, char *b) {
    if (*a > *b)
        return *a - *b;
    return *b - *a;
}

int main() {
    char ch1, ch2;

    printf("두 문자를 입력 : ");
    scanf("%c %c", &ch1, &ch2);

    printf("두 문자의 차이 ==> %d\n", diff(&ch1, &ch2));

    return 0;
}
