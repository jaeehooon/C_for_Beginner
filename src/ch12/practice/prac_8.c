/**
 * 연습문제 8 | 입력한 글자의 갯수를 출력하는 프로그램
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char* p[3];
    char imsi[100];
    int i, size;

    for(i=0; i<3; i++) {
        printf(" %d 번째 문자열 : ", i+1);
        gets(imsi);

        size = strlen(imsi);
        p[i] = (char*)malloc(sizeof(char) * size + 1);
        strcpy(p[i], imsi);
    }

    printf("\n -- 입력한 글자의 수 -- \n");
    for(i=0; i<3; i++)
        printf("%s : %d\n", p[i], strlen(p[i]));

    for(i=0; i<3; i++)
        free(p[i]);

    return 0;
}
