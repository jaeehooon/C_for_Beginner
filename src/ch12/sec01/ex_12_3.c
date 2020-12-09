/**
 * 12-3 | malloc() 함수 사용 예
 */
#include <stdio.h>
#include <stdlib.h>         // 교재에는 malloc.h 이지만 mac os에서는 stdlib 사용

int main() {
    int *p;
    int i, hap=0;
    int cnt;

    printf(" 입력할 개수는 ? ");
    scanf("%d", &cnt);

    p = (int*)malloc(sizeof(int) * cnt);

    for(i=0; i<cnt; i++) {
        printf(" %d 번째 숫자 : ", i+1);
        scanf("%d", p+i);
    }

    for(i=0; i<cnt; i++)
        hap += *(p + i);

    printf("입력 숫자 합 ==> %d\n", hap);

    free(p);                // 메모리 해제

    return 0;
}
