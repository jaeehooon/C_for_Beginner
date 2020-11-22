/**
 * 예제모음 20 | 입력된 문자열을 반대로 출력
 */
#include <stdio.h>
#include <string.h>

int main() {
    char aa[100];
    char bb[100];

    printf("문자열을 입력하세요 : ");
    scanf("%s", aa);

    int cnt = strlen(aa);

    for(int i=0; i<cnt; i++) {
        bb[i] = aa[cnt - (i + 1)];
    }

    bb[cnt] = '\0';

    printf("내용을 거꾸로 출력 ==> %s \n", bb);

    return 0;
}

