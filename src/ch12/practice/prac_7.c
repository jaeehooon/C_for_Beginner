/**
 * 연습문제 7 |
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char* p;
    int i;

    p = (char*) calloc(sizeof(char), 3);     // 초기화 된 메모리
    for(i=0; i<3; i++) {
        printf("할당된 곳의 초깃값 p[%d] ==> %d\n", i, p[i]);
    }

    free(p);

    return 0;
}
