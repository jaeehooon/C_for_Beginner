/**
 * 연습문제 7 | 입력한 두 글자의 차이를 계산하는 프로그램을 함수를 이용하여 작성
 */
#include <stdio.h>

int diff(char ch1, char ch2) {
    // 두 문자 중 아스키코드 기준 큰 문자를 기준으로
    if (ch1 <= ch2)
        return ch2 - ch1;
    return ch1 - ch2;
}

int main() {
    char a, b;

    printf("두 문자를 입력 : ");
    scanf("%c %c", &a, &b);
    printf("두 문자의 차이 ==> %d \n", diff(a, b));

    return 0;
}


