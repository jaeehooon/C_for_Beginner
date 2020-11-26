/**
 * 예제모음 28 | 함수를 이용한 대소문자 변환 프로그램
 */
#include <stdio.h>

char upper(char ch) {
    return ch - ('a' - 'A');
}

char lower(char ch) {
    return ch + ('a' - 'A');
}

int main() {
    char in[100], out[100];
    char ch;
    int i = 0;

    printf("문자열을 입력(100자 이내) : ");
    scanf("%s", in);

    do {
        ch = in[i];
        if (ch >= 'A' && ch <= 'Z')
            out[i] = lower(ch);
        else if (ch >= 'a' && ch <= 'z')
            out[i] = upper(ch);
        else
            out[i] = ch;

        i++;
    } while(ch != '\0');

    out[i] = '\0';
    printf("변환된 결과 ==> %s\n", out);

    return 0;
}
