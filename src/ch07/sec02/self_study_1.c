/**
 * Self Study 1 | 응용 7-2를 do ~ while문으로 변경
 */
#include <stdio.h>

int main(){
    int hap = 0;
    int i;

    i = 0;
    do {
        hap += i;
        i++;
    } while (i <= 10);

    printf(" 1에서 10까지의 합 : %d \n", hap);
}
