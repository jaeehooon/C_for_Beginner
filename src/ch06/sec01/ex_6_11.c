/**
 * 응용 6-11 | for문을 활용하여 합계 구하기 5
 */
#include <stdio.h>

int main() {
    int hap=0;
    int i, num1, num2, num3;

    printf(" 시작값, 끝값, 증가값 입력 ; ");
    scanf("%d %d %d", &num1, &num2, &num3);

    for(i=num1; i<=num2; i+=num3) {
        hap += i;
    }

    printf(" %d에서 %d까지 %d씩 증가한 값의 합 : %d \n", num1, num2, num3, hap);
}
