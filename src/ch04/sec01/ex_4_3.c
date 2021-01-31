/**
 * 기본 4-3 | 대입 연산자와 증감 연산자 사용 예
 */
#include <stdio.h>

int main() {
    int a = 10;

    a++;                                // a = a + 1 와 동일
    printf(" a++ ==> %d \n", a);

    a--;                                // a = a - 1 와 동일
    printf(" a-- ==> %d \n", a);

    a += 5;                             // a = a + 5 와 동일
    printf(" a += 5 ==> %d \n", a);

    a -= 5;                             // a = a - 5 와 동일
    printf(" a -= 5 ==> %d \n", a);

    a *= 5;                             // a = a * 5 와 동일
    printf(" a *= 5 ==> %d \n", a);

    a /= 5;                             // a = a / 5 와 동일
    printf(" a /= 5 ==> %d \n", a);

    a %= 5;                             // a = a % 5 와 동일
    printf(" a %%= 5 ==> %d \n", a);




}
