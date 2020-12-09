/**
 * 12-4 | malloc() 함수와 calloc() 함수의 비교
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, *s;
    int i, j;

    printf("malloc() 함수 사용 \n");
    p = (int*)malloc(sizeof(int)*3);

    for(i=0; i<3; i++)
        printf("할당된 곳의 초깃값 p[%d] ==> %d\n", i, p[i]);

    free(p);

    printf("\n\ncalloc() 함수 사용\n");
    s = (int*)calloc(sizeof(int), 3);

    for(j=0; j<3; j++)
        printf("할당된 곳의 초깃값 s[%d] ==> %d\n", j, s[j]);

    free(s);

    return 0;
}
