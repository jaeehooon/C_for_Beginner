/**
 * 기본 3-5 | 다양한 서식 활용 예1
 */
#include <stdio.h>

int main() {
    // 정수형 서식 출력
    printf("%d\n", 123);
    printf("%5d\n", 123);
    printf("%05d\n", 123);

    // 실수형 서식 출력
    printf("%f\n", 123.45);
    printf("%7.1f\n", 123.45);
    printf("%7.3f\n", 123.45);

    // 문자열형 서식 출력
    printf("%s\n", "Basic-C");
    printf("%10s\n", "Basic-C");
}
