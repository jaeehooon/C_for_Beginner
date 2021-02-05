/**
 * 기본 6-17 | for문의 다양한 활용 예 2
 *
 * 무한루프로 빠짐
 */
#include <stdio.h>

int main() {
    int i;
    i = 0;
    for(    ;   ;   ) {
        printf("%d  \n", i);
        i++;
    }
}
