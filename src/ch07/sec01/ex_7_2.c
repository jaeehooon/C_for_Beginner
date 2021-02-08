/**
 * 응용 7-2 | for문을 while문으로 바꾸는 예 2
 */
#include <stdio.h>

int main(){
    int hap = 0;
    int i;

    i = 0;
    while (i <= 10) {
        hap += i;
        i++;
    }

    printf(" 1에서 10까지의 합 : %d \n", hap);
}
