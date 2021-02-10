/**
 * Self Study 1 | for문을 사용한 응용 7-9를 while문으로 변경
 */
#include <stdio.h>

int main(){
    int hap = 0;
    int i = 0;

    while (hap < 1000) {
        i++;
        hap += i;
    }
    printf(" 1~100의 합에서 1000이 넘는 위치는 ? %d\n", i);
}