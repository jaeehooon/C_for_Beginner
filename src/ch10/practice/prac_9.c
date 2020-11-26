/**
 * 연습문제 9 | call by reference 에 의한 호출을 구현한 함수
 * 두 문자가 서로 바뀌는 swap() 함수를 구현
 */
#include <stdio.h>

void swap(char *a, char *b) {
    char imsi;

    imsi = *a;
    *a = *b;
    *b = imsi;
}

int main() {
    char ch1, ch2;

    printf("두 문자를 입력 : ");
    scanf("%c %c", &ch1, &ch2);

    swap(&ch1, &ch2);

    printf("바뀐 문자 ==> %c %c \n", ch1, ch2);

    return 0;
}
