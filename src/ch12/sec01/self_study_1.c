/**
 * Self Study 1 | 정수가 아닌 실수의 합을 구하도록 [응용 12-3]을 수정
 */
#include <stdio.h>
#include <stdlib.h>         // 교재에는 malloc.h 이지만 mac os에서는 stdlib 사용

int main() {
    float *p;
    int i, cnt;
    float sum=0.0;

    printf(" 입력할 개수는 ? ");
    scanf("%d", &cnt);

    p = (float*)malloc(sizeof(float) * cnt);

    for(i=0; i<cnt; i++) {
        printf(" %d 번째 숫자 : ", i+1);
        scanf("%f", p+i);
    }

    for(i=0; i<cnt; i++)
        sum += *(p + i);

    printf("입력 숫자 합 ==> %f\n", sum);

    free(p);                // 메모리 해제

    return 0;
}
