/**
 * 연습문제 6 | 입력한 숫자의 곱셈을 출력하는 프로그램
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, cnt;
    float mul = 1.0, sum = 0.0;

    printf(" 입력할 개수는 ? ");
    scanf("%d", &cnt);
    float* p = (float*)malloc(sizeof(float) * cnt);
    for(i=0; i<cnt; i++) {
        printf(" %d 번째 숫자 : ", i+1);
        scanf("%f", p+i);
    }

    // 합 & 곱 구하기
    for(i=0; i<cnt; i++) {
        sum += p[i];
        mul *= p[i];
    }

    printf("입력숫자 합 ==> %f\n", sum);
    printf("입력숫자 곱 ==> %f\n", mul);

    free(p);
    return 0;
}
