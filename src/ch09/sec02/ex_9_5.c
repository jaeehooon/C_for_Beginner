/**
 * 응용 9-5 | 정수형 배열의 메모리 할당 2
 */
#include <stdio.h>

int main() {
    int aa[3] = {10, 20, 30};

    printf("&aa[0]의 값은 %d, aa+0은 %d \n", &aa[0], aa+0);
    printf("&aa[1]의 값은 %d, aa+1은 %d \n", &aa[1], aa+1);
    printf("&aa[2]의 값은 %d, aa+2은 %d \n", &aa[2], aa+2);

    return 0;
}
