/**
 * 예제모음 07 | 입력된 문자열을 반대 순서로 출력
 */
#include <stdio.h>

int main() {
    char str[100] = " ";

    printf("문자열을 입력 ==> ");
    scanf("%s", str);

    for(int i=sizeof(str)-1; i>=0; i--)
        printf("%c", str[i]);
    printf("\n");
}
