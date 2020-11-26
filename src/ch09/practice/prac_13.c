/**
 * 연습문제 13 | 사용자로부터 입력받은 문자열을 반대 순서로 출력하는 프로그램을 포인터를 활용하여 작성
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    char* ptr;
    int len;

    printf("글자를 입력 <20자 미만> : ");
    scanf("%s", str);

    ptr = str;          // 포인터 변수에 배열의 주소 대입

    len = strlen(str);      // 문자열의 길이 구함
                            // sizeof(str)로도 구할 수는 있음

    for(int i=len-1; i>=0; i--)
        printf("%c", *(ptr + i));

    return 0;
}
