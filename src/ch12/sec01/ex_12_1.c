/**
 * 기본 12-1 | 포인터를 사용하여 정수 합계를 구하는 예
 */
#include <stdio.h>

int main() {
    int aa[3];
    int *p;
    int i, hap = 0;

    for(i=0; i<3; i++) {
        printf(" %d 번째 숫자 : ", i+1);
        scanf("%d", &aa[i]);
    }

    p = aa;

    for(i=0; i<3; i++)
        hap += *(p+i);

    printf("입력 숫자의 합 => %d\n", hap);

    return 0;
}
