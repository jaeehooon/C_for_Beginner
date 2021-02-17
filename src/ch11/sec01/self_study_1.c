/**
 * Self Study 1 | [응용 11-4]을 활용하여 비밀번호를 입력할 때 "****"와 같은 문자가 표시하도록 수정
 */
#include <stdio.h>
#include <string.h>

void main() {
    char password[5] = "5678";
    char input[5];
    int i;

    printf("비밀번호 4글자를 입력하세요 : ");
    for (i = 0; i < 4; i++) {
        input[i] = getche();
        putchar('*');
    }

    if (strncmp(password, input, 4) == 0)       // 문자열 1과 문자열 2를 자릿수만큼 비교해서 같으면 0을 반환, 다르면 0 이외의 값을 반환
        printf("\n비밀번호 통과~~ \n");
    else {
        printf("\n입력한 비밀번호 ");

        for (i = 0; i < 4; i++)
            putchar(input[i]);

        printf(" 가 틀렸음\n");
    }
}

