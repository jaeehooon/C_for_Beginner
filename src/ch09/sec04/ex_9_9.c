/**
 * 응용 9-9 | 문자형 배열과 포인터의 관계 2
 */
#include <stdio.h>

int main() {
    char s[8] = "Basic-C";
    char *p;
    int i;

    p = s;              // 포인터 변수에 배열 주소를 대입

    for (i = sizeof(s) - 2; i>=0; i--){
        printf("%c", *(s + i));
    }
    printf("\n");

    return 0;
}
