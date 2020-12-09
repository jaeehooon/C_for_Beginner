/**
 * 예제모음 33 | 입력된 문자열을 반대 순서로 출
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char* p[3];
    char imsi[100];
    int i, k, size;

    for(i=0; i<3; i++){
        printf(" %d 번째 문자열 : ", i+1);
        gets(imsi);

        size = strlen(imsi);
        p[i] = (char*)malloc((sizeof(char) * size) + 1);        // 입력한 길이+1 크기의 메모리 확보. 마지막 널문자 때문

        strcpy(p[i], imsi);         // p[i] 에 imsi에 들어간 문자열 복사
    }

    printf("\n -- 입력과 반대로 출력(포인터) : 글자 순서도 거꾸로 -- \n");
    for(i=2; i>=0; i--) {
        printf(" %d : ", i+1);
        for(k=strlen(*(p + i))-1; k>=0; k--) {
            printf("%c", p[i][k]);
        }
        printf("\n");
    }

    printf("\n\n");

    /* 교재 풀이 */
    for(i=2; i>=0; i--) {
        size = strlen(p[i]);
        imsi[size] = '\0';
        for(k=size-1; k>=0; k--) {
            imsi[size-1-k] = p[i][k];
        }

        printf(" %d : %s\n", i+1, imsi);
    }

    for(i=0; i<3; i++)
        free(p[i]);

    return 0;
}
