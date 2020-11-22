/*
 * Self Study | 변수 10개를 입력받고 for 문 대신 while 문을 사용
 */
#include <stdio.h>

int main() {
    int aa[10];
    int hap = 0;
    int i = 0;

    while (i < 10) {
        printf("%d번째 숫자를 입력하세요 : ", i + 1);
        scanf("%d", &aa[i]);
        hap += aa[i];
        i++;
    }
    printf("합계 ==> %d\n", hap);
    return 0;
}