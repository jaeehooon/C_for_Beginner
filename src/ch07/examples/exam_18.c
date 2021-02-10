/**
 * 예제모음 18 | 입력된 문자열의 종류 구분
 */
#include <stdio.h>

int main() {
    char str[100];              // 문자열 배열
    char ch;

    int upper_cnt = 0, lower_cnt = 0, digit_cnt = 0;
    int i;

    printf("문자열을 입력(100자 이내) : ");
    scanf("%s", str);

    i = 0;
    do {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            upper_cnt++;
        if (ch >= 'a' && ch <= 'z')
            lower_cnt++;
        if (ch >= '0' && ch <= '9')
            digit_cnt++;

        i++;
    } while (ch != '\0');

    printf("대문자 %d개, 소문자 %d개, 숫자 %d개\n", upper_cnt, lower_cnt, digit_cnt);
}
