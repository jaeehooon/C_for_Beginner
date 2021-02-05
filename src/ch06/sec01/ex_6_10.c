/**
 * 기본 6-10 | for문을 활용하여 합계 구하기 4
 */
#include <stdio.h>

int main() {
    int hap=0;
    int i, num;

    printf(" 값 입력 : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
        hap += i;

    printf(" 1에서 %d까지의 합: %d \n", num, hap);
}
