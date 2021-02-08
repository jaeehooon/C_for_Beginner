/**
 * Self Study 1 | while문으로 변경하여 응용 6-11 을 변경한 프로그램
 */
#include <stdio.h>

int main() {
    int hap = 0;
    int i;
    int num1, num2, num3;

    printf(" 시작값, 끝값, 증가값 입력 : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    i = num1;
    while (i <= num2) {
        hap += i;

        i += num3;
    }
    printf(" %d에서 %d까지 %d씩 증가한 값의 합 : %d \n", num1, num2, num3, hap);
}
