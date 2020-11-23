/**
 * 예제모음 24 | 포인터를 이용하여 문자열을 반대 순서로 출력
 *
 */
#include <stdio.h>
#include <string.h>

int main() {
    char ss[100];
    int count, i;
    char *p;

    printf("문자열을 입력하세요 : ");
    scanf("%s", ss);

    count = strlen(ss);         // 문자열의 길이 구함

    p = ss;

    printf("내용을 거꾸로 출력 ==> ");
    for(i = count - 1; i>=0; i--) {
        printf("%c", *(p + i));
    }
    printf("\n");

    return 0;
}
